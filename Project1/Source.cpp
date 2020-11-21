//Eder Guerrero
/*Determine the # of floors that can be build with different amount 
of cement in kg. */
#include <iostream>
using namespace std;

int main()
{
	int fon = 250, flor = 175, purch, con;
	int rem;
	cout << "Enter the amount of cement purchased in kg." << endl;
	cin >> purch;
	con = (purch - fon) / flor;
	rem =  purch - (con * flor + fon);
	if (purch < 425)
	{
		cout << "Not enough cement for one floor" << endl;

		return 0;
	}
	cout << "The number of floor that can be constructed are " << con << "." << endl;
	cout << rem << " kg amount of cement is remaining after construction" << endl;
	return 0;
}