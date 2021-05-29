//Eder Guerrero
//22 April 2021
#include <iostream>

using namespace std;

class Polygon
{
private: 
	int numOfSides; //amount of sides the polygon should have.
	double* lengthOfSides; //length of sides of the polygon
	static double maxLength; //maxlength a polygon side could be.
public: 
	//constructor 
	Polygon(int numOfSides = 5)
	{
		this->numOfSides = numOfSides;
		lengthOfSides = nullptr;
		lengthOfSides = new double [numOfSides];
	
	}
	//copy constructor
	Polygon(const Polygon& source) {
		this->numOfSides = source.numOfSides;
		this->lengthOfSides = new double[this->numOfSides];
		
		for (int i = 0; i < numOfSides; i++) {
			lengthOfSides[i] = source.lengthOfSides[i];
		}

	}
	//Destructor
	~Polygon()
	{
		cout << "Deconstruction of class! " << endl;
	
		delete[] this->lengthOfSides;
		lengthOfSides = nullptr;
	}
	//Accessors
	int getNumOfSides(){ return numOfSides;}

	double* getLengthOfSides() { return lengthOfSides; }
	//Mutators
	void setLengthOfSides(int sideNum, double length){
		if (length <= maxLength && length < 0) {
			lengthOfSides[sideNum] = length;
		}	
	}
	//Static Functions
	static double getMaxLength() { return maxLength; }
	static void changeMaxLength(double newMaxLength) { maxLength = newMaxLength; }
};

double Polygon::maxLength = 20;

int main()
{
	return 0;
}