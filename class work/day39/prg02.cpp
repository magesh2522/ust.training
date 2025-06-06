#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Emp {
public:
    Emp(int id, string name) : id(id), name(name) {}

    void disp() const {
        cout << "ID: " << id << "\tName: " << name << endl;
    }

private:
    int id;
    string name;
};

int main() {
    Emp e1(101, "manu");
    Emp e2(104, "magesh");
    Emp e3(102, "goutham");
    Emp e4(105, "abu");

    // Initializing themap

    map<int, vector<Emp>> mapEmp;


    return 0;
}