#include <iostream>

using namespace std;


	class Triangle
	{
	private:
		//class members
		double height, base;

		
	public:
		//class functions
		double calcArea() { return 0.5 * base * height; }

		//Accessors

		double getHeight() { return height; }
		double getBase() { return base; }

		//Mutators
		void setHeight(double newHeight)
		{
			if (newHeight < 0)
			{
				height = 1;
			}
			else
			{
				height = newHeight;
			}
		}
		void setBase(double newBase)
		{
			if (newBase < 0)
			{
				base = 1;
			}
			else {
				base = newBase;
			}
		}

		// constructor
		Triangle()
		{
			height = 1;
			base = 1;
		}
		Triangle(double height, double base)
		{
			setHeight(height);
			setBase(base);
		}
		//Destructor
		~Triangle()
		{
			//I am not sure what goes here.
		}

	};

int main()
{
	Triangle testOne;
	cout << "The base of the Triangle is " << testOne.getBase() << endl;
	cout << "The height of the Triangle is " << testOne.getHeight() << endl;
	cout << testOne.calcArea() << endl;
	cout << endl;
	testOne.setHeight(1);
	testOne.setBase(2);
	cout << "After setting a new height, the height is " << testOne.getHeight() << endl;
	cout << "After setting a new base, the base is " << testOne.getBase() << endl;
	cout << testOne.calcArea() << endl << endl;

	Triangle testTwo(5, 6);

	cout << "The area of the second trinagle is " << testTwo.calcArea() << endl;

}