//cookies1.cpp
//This program finds the average number of boxes of cookies
//sold by the 15 children in a particular scout troop.
//It illustrates the use of a counter, and an accumulator.

//Eder Guerrero
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int numChildren = 15; //The total number of children selling cookies

	int numBoxes, //Number of boxes sold per child
		totalBoxes, //Accumulates total boxes sold by the entire troop
		countSeller; // Counts the number of children selling cookies


	double averageBoxes; //Average number of boxes sold per child

	totalBoxes = 0;
	countSeller = 1;

	cout << "			****Cookie Sales Information****\n\n";


	while (countSeller <= numChildren)
	{
		cout << "Insert the number of boxes sold by the current seller" << endl;
		cin >> numBoxes;
		totalBoxes += numBoxes;
		++countSeller;
	}
	if (totalBoxes <= 0)
		cout << "\nNo boxes were sold.\n";
	else
	{
		averageBoxes = double(totalBoxes) / double(numChildren);
		cout << "The number of sellers is " << numChildren << " and the average number of boxes sold per seller is " << averageBoxes << ".\n";
		averageBoxes = averageBoxes + 0.99;
		cout << "The average whole boxes sold rounded up is " << int(averageBoxes) << endl;
	}
	return 0;
}