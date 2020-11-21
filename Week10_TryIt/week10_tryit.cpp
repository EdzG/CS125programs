//Week10_tryIt

#include <iostream>

using namespace std;

int main()
{
	int i, /* Loop control variable*/ sum; //accumulator
	i = 1;
	
	while (i < 10)
	{
		cout << i << ' ';
		i += 2;
	}
	cout << "\nAfter loop i = " << i << endl << endl;

	i = 5;
	while (i > 0)

	cout << i-- << ' ';
	cout << "\nAfter loop i =" << i << endl << endl;

	
	return 0;
}