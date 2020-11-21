//Eder Guerrero
/* Program to tell Belize bank customers if they qualify for a platinum
card or daimond card. These are two new cards Belize bank is issueing. */

#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
	double crdlim, accbal;
	cout << "Beliz bank is issuing two new cards to customers. \nPlease answer the following to see if you qualify. \n" << endl;
	cout << "What is your credit card limit?" << endl;
	cin >> crdlim;
	cout << "What is your account balance?" << endl;
	cin >> accbal;

	if (crdlim >= 5000 && accbal <= 700)
	{
		cout << "Your credit limit is $" << fixed << setprecision(2) << crdlim << endl;
		cout << "Your account balance is $" << setprecision(2) << accbal << endl;
		cout << "You qualified for the diamond card. \nIt will be issued in 1 week." << endl;
	}
	else if (crdlim >= 5000 && accbal > 700)
	{
		cout << "If your balance falls below 700, you will receive a diamond card" << endl;
	}
	else if (crdlim >= 2000 && accbal <= 500)
	{
		cout << "Your credit limit is $" << fixed << setprecision(2) << crdlim << endl;
		cout << "Your account balance is $" << setprecision(2) << accbal << endl;
		cout << "You qualified for the platinum card. \nIt will be issued in 1 week." << endl;
	}
	else if (crdlim >= 2000 && accbal > 500)
	{
		cout << "If your balance falls below 500, you will receive a platinum card" << endl;
	}
	else
	{
		cout << "You are currently not eligible for any of the new cards" << endl;
	}

	return 0;
}