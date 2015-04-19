///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Kimisha Singh
// Student No: 213545959
// Date: 19 April 2015
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>

using namespace std;

class Animal
{
public:
	Animal() {};
	~Animal() {};

	virtual void name() = 0;
	virtual void does() = 0;
};

class Bird : public Animal
{
public:
	Bird() {};
	~Bird() {};

	virtual void name();
	virtual void does();
};

class Dog : public Animal
{
public: 
	Dog() {};
	~Dog() {};

	virtual void name();
	virtual void does();
};

void Bird::name()
{
	cout << "Bird";
}

void Bird::does()
{
	cout << "chirps";
}

void Dog::name()
{
	cout << "Dog";
}

void Dog::does()
{
	cout << "barks";
}

int main()
{
	Animal *ptrAnimal[2];

	ptrAnimal[0] = new Bird();
	ptrAnimal[1] = new Dog();

	cout << "A ";
	ptrAnimal[0]->name();
	cout << " ";
	ptrAnimal[0]->does();
	cout << endl;

	cout << "A ";
	ptrAnimal[1]->name();
	cout << " ";
	ptrAnimal[1]->does();
	cout << endl;

	delete *ptrAnimal;
	system("pause");
	return 0;
}