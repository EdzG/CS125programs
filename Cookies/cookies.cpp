//cookies.cpp
//statement needed to create this program
//Eder Guerrero
#include <iostream>
using namespace std;

int main()
{
	int lnt, wth, circok, sqrcok, reccok, ArOfPn;
	cout << " This program will tell you how much cookies can be baked with different pans." << endl;
	cout << " " << endl;
	cout << "Enter the length of the baking pan in inches" << endl;
	cin >> lnt;
	cout << "Enter the width of the baking pan in inches" << endl;
	cin >> wth;
	ArOfPn = lnt * wth;
	circok = ArOfPn / 1;
	reccok = ArOfPn / 2;
	sqrcok = ArOfPn / 9;
	cout << " A " << lnt << " X " << wth << " pan can hold " << circok << " circular cookies, " << reccok << " rectangular cookies or " << sqrcok << " square cookies. " << endl;
	cout << " " << endl;
	cout << " The circular cookies has a diameter of 1 inch, the rectangular cookies has a length of 2 and with of 1 and the square cookies is 3 x 3." << endl;

	return 0;
}