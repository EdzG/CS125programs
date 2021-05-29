#include "Functions.h"
using namespace std;

void calc(double X, double Y, double angle, int transX, int transY)
{
	//stores the old x into a temp variable as the old x will be modified. 
	int temp = X;
	//Transforms x and y
	X = (X * cos(angle)) - (Y * sin(angle)) + transX;
	Y = (temp * sin(angle)) + (Y * cos(angle)) + transY;
	//displays the answer.
	cout << fixed << setprecision(2)<< setw(10) << X << " " << setprecision(2) << setw(10) << Y << endl;

}

int** creates2DArr(int rows, int col)
{
	int** arr = nullptr;

	arr = new int* [rows];
	if (arr != nullptr)
	{
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[col];
			if (arr[i] == 0)//When it cannot be allocated.
				return 0;
		}
		
	}
	return arr;
}

void populatesArr(int** arr, int rows, int col)
{
	cout << "Enter the coordinates of the points: " << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Coordinate " << i+1 << ": ";
		for (int j = 0; j < col; j++)
		{
			//Allows the user to enter the x and y value.
			cin >> arr[i][j];
		}
		cout << endl;
	}
}
double toRad(double angle)
{
	//converts to radians
	angle = (angle * 3.14) / 180.0;

	return angle;
}

double toDegree(double angle)
{
	//converts to degrees
	angle = (angle * 180.0) / 3.14;
	return angle;
}
void deAllocatesArr(int** arr, int rows, int col)
{
	//deallocates a 2D dynamic array.
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	//Sets it to null so that it does not contain the address
	//of memory it no longer has access to. 
	arr = nullptr;
}
void printAns(int** arr, int rows, int col, int transX, int transY, double angle)
{
	//Table Heading
	cout << endl;
	cout << "\t\tTransformation of coordinates" << endl;
	cout << setw(12) << "Point" << setw(12) << "Old X" << setw(11)<< "Old Y" << setw(10) << "New X" << setw(10) << "New Y" << endl;

	for (int i = 0; i < rows; i++)
	{
		//initiallizes the variables to zero so that previous data is not used. 
		double oldx = 0, oldy = 0;

		cout <<setw(10) << i + 1 << " ";
		for (int j = 0; j < col; j++)
		{
			//displays the coordinate.
			cout << setw(10) << arr[i][j] << " ";

			if (j == 0)//Ensures it is the x coordinate
			{
				oldx = arr[i][j];
			}
			else//By default if it not the x coordinate then it is the y since there is no z. 
				oldy = arr[i][j];
		}
		
		 calc(oldx, oldy, angle, transX, transY);
		cout << endl;
	}
}
