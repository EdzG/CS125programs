#include <iostream>
using namespace std;

int main()
{
	double MonSpen;
	cout << "Enter the amount of money spend." << endl;
	cin >> MonSpen;

	if (MonSpen >= 500)
	{
		cout << "You get a 30 dollar coupon." << endl;
	}
	else if (MonSpen >= 250)
	{
		cout << "You get a 20 dollar coupon" << endl;
	}
	else if (MonSpen >= 100)
	{
		cout << "You get a 5 dollar coupon" << endl;
	}
	
	return 0;
}