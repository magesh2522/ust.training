#include <iostream>
using namespace std;

typedef struct Quiz {
	string question;
	string opetianA;
	string opetianB;
	string opetianC;
	string opetianD;
	char correctOption;

}question;

void viewquestion(question quiz[], int numquestion) {
	for (int i = 0;i < numquestion;i++) {
		cout << "\nQ" << (i + 1) << ": " << quiz[i].question << endl;
		cout << "A." << quiz[i].opetianA << endl;
		cout << "B." << quiz[i].opetianB << endl;
		cout << "C." << quiz[i].opetianC << endl;
		cout << "D." << quiz[i].opetianD << endl;
		cout << "Correct option " << quiz[i].correctOption << endl;


	}
}
void takequiz(question quiz[], int numquestion)
{
	int score = 0;
	char answer;

	for (int i = 0;i < numquestion;i++) {
		cout << "\nQ" << (i + 1) << ": " << quiz[i].question << endl;
		cout << "A." << quiz[i].opetianA << endl;
		cout << "B." << quiz[i].opetianB << endl;
		cout << "C." << quiz[i].opetianC << endl;
		cout << "D." << quiz[i].opetianD << endl;
		cout << "your answer (A/B/C/D): ";
		cin >> answer;
		answer = toupper(answer);

		if (answer == quiz[i].correctOption) {
			cout << "correct!\n";
			score++;
		}
		else {
			cout << "Wrong!" << quiz[i].correctOption << endl;;
		}
	}
	cout << "your quiz is complete " << score << "/ " << numquestion << endl;

}

int main() {
	const int numquestion = 3;

	question quiz[numquestion] = {
		{"what is 2+5","10","3","7","6",'C'},
		{"what is 2-5","10","3","7","6",'B'},
		{"what is 2*5","10","3","7","6",'A'}
	};
	int choise;
	do {
		cout << "----quiz menu----" << endl;
		cout << "1. take the quiz" << endl;
		cout << "2. view all question" << endl;
		cout << "3. exit" << endl;
		cout << "Enter your choise" << endl;
		cin >> choise;

		switch (choise) {
		case 1:takequiz(quiz, numquestion);break;
		case 2:viewquestion(quiz, numquestion);break;
		case 3:cout << "exit thank you for using " << endl;
		}
	} while (choise != 3);
	return 0;

}