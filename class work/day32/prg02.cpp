#include <iostream>
using namespace std;

class Animal {
public:
	virtual void make_sound() {
		cout << "Animal Makes a sounds" << endl;
	}

};
class Dog :public Animal {
public:
	void make_sound() override{
		cout << "dog barks!" << endl;
	}

};
class Cat :public Animal {
public:
	void make_sound() {
		cout << "Cat meows!" << endl;

	}
};
int main() {
	Animal* animal1 = new Dog;
	Animal* animal2 = new Cat;


	cout << "Animal 1: " << endl;
	animal1->make_sound();

	cout << "Animal 2: " << endl;
	animal2->make_sound();

	delete animal1;
	delete animal2;


}