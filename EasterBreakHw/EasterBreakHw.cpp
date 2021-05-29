//Eder Guerrero
//27 March 2021
//Program that reads a set of points and transforms them.
#include "Functions.h"

using namespace std;

int main()
{	
	// creates an pointer to pointer.
	int** arr = 0;
	//variables needed.
	int rows, col, transX, transY;
	double angle;

	cout << "Enter the number of points for the object: ";
	cin >> rows;

	//sets the columns to two since the coordinates are in a plane so it only has x and y.
	col = 2;
	
	//creates a 2 dimensions dynmaic array.
	arr = creates2DArr(rows, col);

	//Allows the user to populate the array.
	populatesArr(arr, rows, col);
	cout << "Enter the number of degrees to rotate the object counterclockwise: ";
	cin >> angle;

	//converts the angle from degree to radians since trig function in c++ are in radians. 
	angle = toRad(angle);

	cout << "Enter the translation amount (X, Y): ";
	cin >> transX >> transY;
	cout << endl;

	//Calculates and displays the transformation in a neat table.
	printAns(arr, rows, col, transX, transY, angle);

	//Ensures to deallocate the memory that was previously allocated. 
	deAllocatesArr(arr, rows, col);

	return 0;
}		