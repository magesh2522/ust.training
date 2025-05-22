#include<iostream>
using namespace std;

class StudentGrade
{
private:
    char name[30];
    int m1, m2, m3;
    float avg;

public:
    void setstudentName();
    void setm1(int);
    void setm2(int);
    void setm3(int);
    void getMark();
    void calcAvg();
    void display();
};

void StudentGrade::getMark() {
    cout << "Enter your name: ";
    cin >> name;  
    cout << "Enter marks for 3 subjects:" << endl;
    cout << "Subject 1: ";
    cin >> m1;  
    cout << "Subject 2: ";
    cin >> m2;  
    cout << "Subject 3: ";
    cin >> m3; 
}

void StudentGrade::setm1(int m)
{
    m1 = m;
}

void StudentGrade::setm2(int m)
{
    m2 = m;
}

void StudentGrade::setm3(int m)
{
    m3 = m;
}

void StudentGrade::calcAvg()
{
    avg = (m1 + m2 + m3) / 3.0;
    cout << "Average of marks is: " << avg << endl;
}

void StudentGrade::display()
{
    cout << "Your Grade: " << "\t";
    if (avg >= 90 && avg <= 100)
    {
        cout << "A";
    }
    else if (avg >= 70 && avg <= 89)
    {
        cout << "B";
    }
    else if (avg >= 60 && avg <= 79)
    {
        cout << "C";
    }
    else if (avg >= 40 && avg <= 59)
    {
        cout << "D";
    }
    else if (avg >= 0 && avg <= 39)
    {
        cout << "Failed";
    }
    else
    {
        cout << "Invalid";
    }
}

int main()
{
    StudentGrade g;
    g.getMark();    
    g.calcAvg();    
    g.display();    
}
