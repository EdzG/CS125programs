// paint.cpp
// This program show the gallons, cans(1 gal of paint per can) and total cost of paint needed to paint two coats unto a fence.
// Eder Guerrero

#include <iostream>
using namespace std;

int main()
{
	double gal, lnt, hgt, totcos, ArOfF, prc= 54.95;
	int cn;
	cout << "Enter the length & height of the fence, respectively, in feet sperated by a space." << endl;
	cin >> lnt >> hgt; 

	ArOfF = lnt * hgt;
	gal = (ArOfF / 350) * 2.0;
	cn = gal + 0.99;
	totcos = prc * cn * 1.00;

	cout << gal << " gallons of paint is needed to paint two coats of paint on the fence." << endl;
	cout << cn << " cans of paint should be purchased to paint the fence." << endl;
	cout << "The total cost is $" << totcos << "0" << endl; 

	return 0;
}