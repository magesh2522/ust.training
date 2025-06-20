#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include<istream>
#include <mutex>
#include<sstream>




using namespace std;

class User {  //base class 
public:
    string username;
    string password;
};

vector<User> users;//this user <vector> calling inside the function 

bool signUp() {//getting user name and password
    User newUser;
    cout << "Enter username: ";
    cin >> newUser.username;//class user name calling here 
    cout << "Enter password: ";
    cin >> newUser.password;//class password calling here 

    for (User u : users) {
        if (u.username == newUser.username) {///getting same user name it will exists
            cout << "Username already exists!!!.\n";
            return false;
        }
    }

    users.push_back(newUser);///insert new user name 
    cout << "****Signp successful****.\n";
    return true;
}

bool login() {
    string username, pass;
    cout << "Enter username: ";
    cin >> username;//geting user name details
    cout << "Enter password: ";
    cin >> pass;//getting user name password 
    for (User u : users) {///if you give user name and password correct the will get success full login status 
        if (u.username == username && u.password == pass) {
            cout << "Login successful.\n";
            return true;
        }
    }
    cout << "Invalid credentials.\n";///if we give wrong will get wrong 
    return false;
}

struct CustomerBilling {
    string MSISDN;//MSDIN MAX_LENGTH is 7
    string brand;//gere brand means type of sim like (airtel or jio) kind of
    string mmc;//mmc contry code 6
    int inInter = 0, outInter = 0;
    int inExter = 0, outExter = 0;
};

struct OperatorBilling {
    string brand;//brand like airtel or jio kind of 
    string mmc;//third party mobile operator 
    int totalIn = 0, totalOut = 0;
};

vector<CustomerBilling> customers;
vector<OperatorBilling> operators;

mutex c1;//locking purpose  of Customer billing
mutex o1;//same like operator billing


vector<string>split(string line, char delimiter) {//removing the simbles so here we used  delimited 
    vector <string>parts;
    string temp;
    for(char c:line)
        if (c == delimiter) 
        {
            parts.push_back(temp);
        }
        else
        {
            temp + c;
        }
    parts.push_back(temp);
    return parts;
}
CustomerBilling* getCustomer(string msisdn, string brand, string mmc) {
    for (auto& a : customers) //addressing the customers 
    {//itreating a customer 
        if (a.MSISDN == msisdn)
            return &a;
    }
    customers.push_back({ msisdn, brand, mmc });
    return &customers.back();
}
OperatorBilling* getOperator(string mmc, string brand) {
    for (auto& b : operators)//addressing the operators 
    {//iterating operators
        if (b.mmc == mmc) return &b;
    }
    operators.push_back({ brand, mmc });
    return &operators.back();
}

void processCustomerBilling(string filename) {
    ifstream file(filename);//open and reading process 
    string line;

    while (getline(file, line))
    {
        auto fields = split(line, '|');//split the character '|" 
        if (fields.size() < 10) {//limit 
            continue;
        }

            lock_guard<mutex> lock(c1);//lockin this customeBilling 
        }
    }
void searchCustomerBilling() {
    string msisdn;///get the msiden value 
    cout << "Enter MSISDN: ";
    cin >> msisdn;

    for (auto& c : customers)
    {
        if (c.MSISDN == msisdn) {//if customers and msisdn is same will get the below cout details 
            cout << "\nCustomer ID: " << c.MSISDN << " (" << c.brand << ")\n";
            cout << "* Services within the mobile operator \n";
            cout << "Incoming:  | Outgoing:  \n";
            cout << "* Services outside the mobile operator \n";
            cout << "Incoming: | Outgoing: outExterna\n";


            return;
        }
    }
    }

    void saveBillingFile() {
        ofstream out("data.cdr");
        for (auto& c : customers) 
        {
            out << "Customer ID: " << c.MSISDN << " (" << c.brand << ")\n";
            out << "In-Internal:  Out-Internal << \n";
            out << "In-External:  Out-External:  \n";
        }
        out.close();
    }
    void searchBilling() 
    {
        string key;
        cout << "Enter Brand or MMC: ";
        cin >> key;

        for (auto& o : operators) 
            if (o.brand == key || o.mmc == key)
            {
                cout << "\nOperator: " << o.brand << " (" << o.mmc << ")\n";
                cout << "Incoming Duration: " << o.totalIn << "\n";
                cout << "Outgoing Duration: " << o.totalOut << "\n";
                return;
            }
        
    }

    int main()
    {
        bool loggedIn = false;

        cout << "Welcome to CDR Billing App!\n";

        while (!loggedIn)
        {
            int choice;
            cout << "\n1. SignUp\n2. Login\n3. Exit\nChoice: ";
            cin >> choice;

            if (choice == 1) 
            {
                signUp();//checking the user name and password if its is same this will run properly
            }
            else if (choice == 2)
            {
                loggedIn = login();//again we have to give same username and password it is correct this will give suceess validation
            }
            else if 
                (choice == 3) return 0;//if you want to exit we have to press 3 vslue then  program will stop. 
        }

        while (true) {
            int choice;
            cout << "\n1. Process CDR File\n2. Print/Search Billing Info\n3. Logout\nChoice: ";
            cin >> choice;

            if (choice == 1)///if you press 1 it will be ask fot process Cdr file 
            {
                thread t1(processCustomerBilling, "data.cd");
               
                t1.join();
                cout << "Processed the CDR data.\n";
            }
            else if (choice == 2) //if you press 2 it will ask for serach and billing details 
            {
                int sub;
                cout << "\n1. Customer Billing\n2. Interoperator Billing\n3. Back\nChoice: ";
                cin >> sub;
 

                if (sub == 1) 
                {
                    int opt;
                    cout << "1. Search MSISDN\n2. Save to CB.txt\nChoice: ";
                    cin >> opt; 
                    if (opt == 1) searchCustomerBilling();
                }
            }
            else if (choice == 3) 
            {
                cout << "Logged out.\n"; ///if you press 3 program will stop and logot ......
                break;
            }
        }

        return 0;
    }