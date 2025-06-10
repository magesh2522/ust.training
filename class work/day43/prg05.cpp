#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

class Student {
private:
    int s_Id;
    int s_MobileNum;
    string s_Name;

public:
    Student() :s_Id(0), s_MobileNum(0), s_Name("") {}
    Student(int s_Id, int s_MobileNum, string s_Name)
        : s_Id(s_Id), s_MobileNum(s_MobileNum), s_Name(s_Name) {}

    void disp() const {
        cout << "ID: " << s_Id << " Mobile Number: " << s_MobileNum << " Name: " << s_Name << endl;
    }

    friend istream& operator>>(istream& in, Student& e)
    {
        in >> e.s_Id >> e.s_MobileNum >> e.s_Name; return in;
    }
    friend ostream& operator>>(ostream& os, Student& e) {
        os << "ID" << e.s_Id << "MobileNum" << e.s_MobileNum << e.s_Name << endl;
        return os;

    }
};


int main() {

    istream_iterator<Student>inIt(std::cin);
    istream_iterator<Student>endIt;
    vector<Student> students;
    cout << "Enter student details\n";
    while (inIt != endIt)
    {
       students.push_back(*inIt);
        ++inIt;
    }

    for (auto e : students)
        cout << e;



    return 0;
}

   
 
