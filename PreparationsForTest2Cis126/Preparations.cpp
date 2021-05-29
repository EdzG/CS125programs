#include <iostream>
#include <iomanip>

using namespace std;

void printSalesAmountandTotalSales(int amountOfSales[][3], int rowSize, int sumA, int sumB, int sumC)
{
	
		for (int i = 0; i < rowSize; i++)
		{
			if (i == 0)
			{
				cout << "Sales amount for every month of store A, B, and C: " << endl;
				cout << setw(12) << "Month " << setw(12) << "A " << setw(12) << "B " << setw(12) << "C" << endl;
			}

			cout << setw(10) << i;
			for (int j = 0; j < 3; j++)
			{
				cout << setw(10) << "$" << amountOfSales[i][j] << " ";
			}
			sumA += amountOfSales[i][0];
			sumB += amountOfSales[i][1];
			sumC += amountOfSales[i][2];	
			cout << endl;
			
	}
		cout << setw(12) << "Total Sales: " << endl;
		cout << setw(20) << "$" << sumA << " " << setw(10) << "$" << sumB << " " << setw(10) << "$" << sumC << endl;
		cout << endl;
}

void printListQualifies(int amountOfSales[][3], int rowSize)
{

	int bonusCount(0);
	int totalBonusMoney(0);

	for (int i = 0; i < rowSize; i++)
	{
		if (i == 0)
		{
			cout << "Sales amount for every month of store A, B, and C that qualifies for the bonus: " << endl;
			cout << setw(12) << "Month " << setw(12) << "A " << setw(12) << "B " << setw(12) << "C" << endl;
		}

		cout << setw(10) << i;
		for (int j = 0; j < 3; j++)
		{
			if (amountOfSales[i][j] > 30000)
			{
				cout << setw(10) << "$" << amountOfSales[i][j] << " ";
				bonusCount += 1;
				totalBonusMoney += 1000;
			}
			else
				cout << setw(10) << "------";
		}
		cout << endl;



	}
	cout << endl;
	cout << "The total number of bonus awarded this year is " << bonusCount << "." << endl;
	cout << "The total number of bonus money awarded this year is $" << totalBonusMoney << " " << endl;
}

int main()
{
	int sumA = 0;
	int sumB = 0;
	int sumC = 0;
	const int rowSize = 2;
	const int columnSize = 3;

	int amountOfSales[rowSize][columnSize];

	for (int i = 0; i < rowSize; i++)
	{
		cout << "Enter the amount of sales for month " << i + 1 << " for ";
		cout << "store A, B and then C." << endl;
		for (int j = 0; j < columnSize; j++)
		{
			
			cin >> amountOfSales[i][j];
		}
		cout << endl;

	}

	printSalesAmountandTotalSales(amountOfSales, rowSize, sumA, sumB, sumC);
	printListQualifies(amountOfSales, rowSize);

	/*
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < columnSize; j++)
		{
			cout << amountOfSales[i][j];
		}

	}
	*/
	

		return 0;
}

























































