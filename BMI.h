// Header ==> Function Declarations

#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI
{
public:
	//Default Constructor (Sets member variables to null states)
	BMI();

	//Overload Constructor (to use values from main)
	BMI(string, int, double);

	//Destructor
	~BMI();

	//Accessor Functions
	string getName() const;
	int getHeight() const;
	double getWeight() const;

	//Mutator Functions
	void setName(string);
	void setHeight(int);
	void setWeight(double);

	double calculateBMI();

private:
	//Member Variables
	string newName;
	int newHeight;
	double newWeight;
};

#endif
