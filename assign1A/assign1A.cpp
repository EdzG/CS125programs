//assign1A
#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 2, answer1;
	double c = 2.0, answer2;

	cout << "assign1A" << endl;
	cout << a + b << " " << a - b << endl;
	cout << a * b << " " << a % b << endl;
	cout << a / b << " " << a / c << endl;

	answer2 = a / c;
	answer1 = answer2;
	cout << answer1 << " " << answer2 << endl;
	 
	a = a - 1;
	b = a * 2;
	c = a * b + c;
	cout << a << " " << b << " " << c << endl;

	return 0;
}