//Eder Guerrero
//13 February 2021

#include <iostream>
#include <string>

using namespace std;
/*
class Flowers
{
private:
	//Data members
	string name;
	int quantity;
	double cost;

	//member functions

	//constructors
	Flowers()
	{
		name = "flower";
		quantity = 0;
		cost = 0;
	}

	Flowers(string flowerName, int flowerQuantity, double flowerCost)
	{
		name = flowerName;
		quantity = flowerQuantity;
		cost = flowerCost;
	}

	//mutators
	void setName(string flowerName)
	{
		name = flowerName;
	}

	void setQuantity(int flowerQuantity)
	{
		if (quantity < 0)
		{
			quantity = 0;
		}
		else
		{
			quantity = flowerQuantity;
		}

	}

	void setCost(double flowerCost)
	{
		if (flowerCost < 0)
		{
			cost = 0;
		}
		else
		{
			cost = flowerCost;
		}

	}

	//accessors
	string getName()
	{
		return name;
	}

	int getQuantity()
	{
		return quantity;
	}

	double getCost()
	{
		return cost;
	}

	//Total cost
	double calcTotalCost()
	{
		return (quantity * cost);
	}

};

int main()
{
	const int SIZE = 3;
	int hours[SIZE];
	for (int x : hours)
	{
		cin >> x;
	}


	return 0;
}



class Item
{
	//Data members
private:
	int quantity;

public:
	//Members Functions

	//mutator
	void setQuantity(int q)
	{
		quantity = q;
	}
	//accessor
	int getQuantity()
	{
		return quantity;
	}
};

int main()
{
	Item coke;

	coke.setQuantity(100);
	cout << "The quantity is " << coke.getQuantity() << endl;

	return 0;
}



int main()
{


	return 0;
}




int main()
{
	const int EMPLOYEES = 50;
	int payRate[EMPLOYEES];
	int idNum[EMPLOYEES];
	int workedHours[EMPLOYEES];
	int earnings[EMPLOYEES];

	for (int i = 0; i < EMPLOYEES; i++)
	{
		cout << "Employee number " << i + 1 << endl;
		cout << "Enter the Id number: ";
		cin >> idNum[i];
		cout << "Enter the payrate: ";
		cin >> payRate[i];
		cout << "Enter the hours worked: ";
		cin >> workedHours[i];
		
		cout << endl;
	
	}

	
		for (int i = 0; i < EMPLOYEES; i++)
		{
			cout << "Employee number " << i + 1 << endl;
			cout << "Enter the Id number: ";
			cin >> idNum[i];
			cout << "Enter the payrate: ";
			cin >> payRate[i];
			cout << "Enter the hours worked: ";
			cin >> workedHours[i];


			if (payRate[i] > 1000)
			{
				earnings[i] = payRate[i] / 24;
			}
			else if (payRate[i] >= 5 && payRate[i] <= 1000)
			{
				earnings[i] = payRate[i] * workedHours[i];
			}
			else
			{
				earnings[i] = 0;
			}
			return earnings[i];
		}
	earnings = 0;
}
return earnings;
}


for (int i = 0; i < EMPLOYEES; i++)
{
if (i == 0)
{
cout << " \t \t \t Id Number " << " \t \t \t Earnings" << endl;
}

cout << "\t \t \t " idNum[i] << "\t \t \t " << earnings[i] << endl;

}



return 0;
}

	for (int i = 0; i < EMPLOYEES; i++)
	{
		if (i == 0)
		{
			cout << " \t \t \t Id Number " << " \t \t \t Earnings" << endl;
		}
		cout << " \t \t \t " << idNum[i] << "\t \t \t " << earnings[i] << endl;

	}



	return 0;
}
*/
int main()
{
	const int EMPLOYEES = 2;
	int payRate[EMPLOYEES];
	int idNum[EMPLOYEES];
	int workedHours[EMPLOYEES];
	int earnings[EMPLOYEES];

	for (int i = 0; i < EMPLOYEES; i++)
	{
		cout << "Employee number " << i + 1 << endl;
		cout << "Enter the Id number: ";
		cin >> idNum[i];
		cout << "Enter the payrate: ";
		cin >> payRate[i];
		cout << "Enter the hours worked: ";
		cin >> workedHours[i];
		cout << endl;

		if (payRate[i] > 1000)
		{
			earnings[i] = payRate[i] / 24;
		}
		else if (payRate[i] >= 5 && payRate[i] <= 1000)
		{
			earnings[i] = payRate[i] * workedHours[i];
		}
		else
		{
			earnings[i] = 0;
		}

	}


	for (int i = 0; i < EMPLOYEES; i++)
	{
		if (i == 0)
		{
			cout << " \t \t \t Id Number " << " \t \t Earnings" << endl;
		}

		cout << "\t \t \t " << idNum[i] << "\t \t \t " << earnings[i] << endl;

	}



	return 0;
}