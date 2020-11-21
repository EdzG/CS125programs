//sumSeries.cpp
//This program displays a series of terms and computes its sum. 
//Eder Guerrero
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	int denom; //Denominator of a particular term.
	double sum = 0.0; //Accumulator that adds up all terms in the series
	int n, x;
	char exit;
	cout << "Eder Guerrero \n" << endl;

	do
	{
	cout << "This program sums the series 1/x + 1/2x + 1/3x ... + 1/x n" << endl; 
	cout << "What should x be(1-10)? "; cin >> x; // x is denominator for which muliples will be found. 
	cout << "What should n be in the final term (2 - 10)? "; cin >> n; // n is how much mulitples will be added and displayed.
	cout << "" << endl;
	sum = 0.0; // reinatialize so that the do while loop works does not keep the previous value for the sum.
	
		for (int denom = x; denom <= n * x; denom += x)
		{

			cout << "1/" << denom << " "; //Displays the term in fraction form.
			if (denom == n * x) //n * x is the final muliple that will be found. 
			{
				cout << "= ";
			}
			else
			{
				cout << "+ ";
			}
			sum += double(1.0 / denom); // Adds the fractions together. 
		}
		cout << fixed << setprecision(3) << sum << endl << endl; //Sets the answer to 3 decimal places.

		cout << "Press y to exit the program or any other character to rerun it. "; cin >> exit; //Give intructions to continue or quit.
		cout << "" << endl;


	} while (exit != 'Y' && exit != 'y'); //If it is not y the program will rerun and if it is y it will exit. 

	return 0;
}