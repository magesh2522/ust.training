#pragma once


class Student
{
private:
	int rollno;
	char name[100];
	float marks[4];
public:
	void setName(const char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();

private:
	float calcAvg();

};
