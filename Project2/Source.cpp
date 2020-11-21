#include <iostream>
using namespace std;
int main()
{
	double BP;
	cout << "Enter the number of books the costumer purchased." << endl;
	cin >> BP;

	if (BP >= 3)
	{
		cout << "5 coupon" << endl;
	}
	else if (BP >= 5)
	{
		cout << "10 coupon " << endl;
	}
	else (BP >= 10)
	{
		cout << "20 coupon" << endl;
	}
	return 0;
}