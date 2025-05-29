#include <iostream>
using namespace std;
//obstract base class
class Animal {
	public:
		virtual void eat() = 0;
		virtual void drink() = 0;
		virtual void breathe() = 0;
		virtual void sleep() = 0;
		virtual void move() = 0;
		virtual void lifetime() = 0;
};
class Cat :public Animal {
public:

	 void eat() {}
	 void drink() {}
	 void breathe(){}
	 void sleep() {}
	 void move() {}
	 void lifetime(){}
};

class Dog : public Animal {
public:
	void eat() {}
	void drink() {}
	void breathe() {}
	void sleep() {}
	void move() {}
	void lifetime() {}
};
int main() {
	Cat c;
	Dog d;

}