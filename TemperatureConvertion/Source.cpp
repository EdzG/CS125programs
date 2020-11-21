#include <iostream>
using namespace std;

int main()
 
{
	double fah, cel;
	cout << "Enter temperature in fahrenhit." << endl;
	cin >> fah;
	cel = (fah - 32) / 1.8;
	cout << fah << " degrees fahrenhit is equal to" << cel << " degrees celsius" << endl;

	return 0;
}