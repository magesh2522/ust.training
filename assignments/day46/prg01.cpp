#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <mutex>
#include <thread>
#include <condition_variable>
#include <chrono>
using namespace std;

//  Bid Class
class Bid {
public:
    double amount;
    string bidderName;

    Bid(double amt, const string& name) : amount(amt), bidderName(name) {}

    bool operator<(const Bid& other) const {
        return amount < other.amount;
    }
};

//  Abstract User
class User {
public:
    virtual void viewItems() = 0;
    virtual ~User() {}
};

// Buyer class
class Buyer : public User {
    string name;

public:
    Buyer(const string& n) : name(n) {}
    string getName() const { return name; }

    void viewItems() override {
        cout << "Buyer " << name << " is viewing items.\n";
    }
};

//  Seller class
class Seller : public User {
    string name;

public:
    Seller(const string& n) : name(n) {}

    void viewItems() override {
        cout << "Seller " << name << " is managing auctions.\n";
    }

    string getName() const { return name; }
};

// Auction 
class Auction {
private:
    string itemName;
    double minPrice;
    priority_queue<Bid> bids;
    bool isOpen;
    mutex auctionMutex;

public:
    Auction(const string& item, double price)
        : itemName(item), minPrice(price), isOpen(true) {}

    void placeBid(const Bid& bid) {
        lock_guard<mutex> lock(auctionMutex);
        if (!isOpen) {
            cout << "Auction for " << itemName << " is closed.\n";
            return;
        }
        bids.push(bid);
        cout << "Bid of $" << bid.amount << " placed by " << bid.bidderName << " on " << itemName << ".\n";
    }

    void closeAuction(ofstream& logFile) {//finding who is giving more money and winner 
        lock_guard<mutex> lock(auctionMutex);
        isOpen = false;
        logFile << "Auction Closed: " << itemName << "\n";
        if (!bids.empty() && bids.top().amount >= minPrice) {
            Bid winner = bids.top();
            logFile << "Winner: " << winner.bidderName << " with $" << winner.amount << "\n\n";
            cout << "Auction '" << itemName << "' won by " << winner.bidderName << " for $" << winner.amount << ".\n";
        }
        else {
            logFile << "No valid bids for " << itemName << "\n\n";
            cout << "Auction '" << itemName << "' ended with no valid bids.\n";
        }
    }

    bool isAuctionOpen() const {
        return isOpen;
    }
};

// AuctionEngine 
class AuctionEngine {
    unordered_map<string, Auction*> auctions;
    mutex engineMutex;

public:
    ~AuctionEngine() {
        for (auto& a : auctions) {
            delete a.second;
        }
    }

    void createAuction(const string& itemName, double minPrice) {
        lock_guard<mutex> lock(engineMutex);
        auctions[itemName] = new Auction(itemName, minPrice);
        cout << "Created auction for: " << itemName << " (Min Price: $" << minPrice << ")\n";
    }

    Auction* getAuction(const string& itemName) {
        lock_guard<mutex> lock(engineMutex);
        if (auctions.count(itemName)) {
            return auctions[itemName];
        }
        return nullptr;
    }

    unordered_map<string, Auction*>& getAuctions() {
        return auctions;
    }
};

//  FileAuditManager
class FileAuditManager {
    ofstream logFile;

public:
    FileAuditManager(const string& filename) {
        logFile.open(filename, ios::app);
    }

    void log(const string& message) {
        logFile << message << endl;
    }

    ofstream& getStream() {
        return logFile;
    }

    ~FileAuditManager() {
        logFile.close();
    }
};

//  BidManager
class BidManager {
public:
    static void placeBid(AuctionEngine& engine, const string& item, double amount, Buyer& buyer, FileAuditManager& logger) {
        Auction* auction = engine.getAuction(item);
        if (auction && auction->isAuctionOpen()) {
            auction->placeBid(Bid(amount, buyer.getName()));
            logger.log(buyer.getName() + " placed $" + to_string(amount) + " on " + item);
        }
        else {
            cout << "Cannot place bid on " << item << ". Auction not found or closed.\n";
        }
    }
};

//  ResultProcessor 
class ResultProcessor {
public:
    static void closeAllAuctions(AuctionEngine& engine, FileAuditManager& logger) {
        for (auto& pair : engine.getAuctions()) {
            pair.second->closeAuction(logger.getStream());
        }
    }
};


int main() {
    AuctionEngine engine;
    FileAuditManager logger("auction_log.txt");

    Seller seller("Alice");
    Buyer buyer1("Bob");
    Buyer buyer2("Charlie");

    seller.viewItems();
    buyer1.viewItems();

    engine.createAuction("Painting", 100.0);
    engine.createAuction("Watch", 200.0);

    // Simulate concurrent bidding
    thread t1(BidManager::placeBid, ref(engine), "Paintng", 120.0, ref(buyer1), ref(logger));
    thread t2(BidManager::placeBid, ref(engine), "Painting", 150.0, ref(buyer2), ref(logger));
    thread t3(BidManager::placeBid, ref(engine), "Watch", 250.0, ref(buyer1), ref(logger));//giving multiple o/p

    t1.join();
    t2.join();
    t3.join();

    this_thread::sleep_for(chrono::seconds(1));

    ResultProcessor::closeAllAuctions(engine, logger);

    return 0;
}
