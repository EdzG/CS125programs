//commission.cpp
//This program determines the commission of different transactions made at different locations. 
//Eder Guerrero

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	char ComEx = 'E', CotEx = 'C', MerEx = 'M', Quit = 'Q';
	char  letter;
	double amount, commission;

	cout << "Program to calculate the commission of different transactions." << endl;
	cout << "Choose the option where the transaction was made.\n" << endl;

	cout << "\tE-Commodity Exchange\n" << "\tC-Cotton Exchange\n" << "\tM-Mercantile Exchange\n" << "\tQ-Quit\n" << endl;
	cout << "Enter only the letter(uppercase) corresponding to the option.\n";
	cin >> letter;
	if (letter == Quit)
	{
		exit(1);
	}
	cout << "Enter the amount from which the commission is to be determined." << endl;
	cin >> amount;
	cout << " " << endl;

	if (letter == ComEx)
	{
		commission = amount * 0.05;
		cout << "The transaction of $" << fixed << setprecision(2) << amount << " made at Commodity Excahange has a commission of $" << setprecision(2) << commission << endl;
	}
	else if (letter == CotEx)
	{
		commission = amount * 0.037;
		cout << "The transaction of $" << fixed << setprecision(2) << amount << " made at Cotton Excahange has a commission of $" << setprecision(2) << commission << endl;
	}
	else if (letter == MerEx)
	{
		commission = amount * 0.042;
		cout << "The transaction of $" << fixed << setprecision(2) << amount << " made at Mercantile Excahange has a commission of $" << setprecision(2) << commission << endl;
	}
	else
	{
		cout << "Invalid Choice" << endl;
	}

	return 0;
}