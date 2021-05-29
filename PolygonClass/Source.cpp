#include <iostream>

using namespace std;

class GradeBook
{
private:
    int numOfStud;
    double* grades;

public:
    // The constructor below may work as GradeBook() and GradeBook (int)
    GradeBook(int size = 10) // default argument: when no value is passed, size is 10; 
    {                    // otherwise, size would hold the data passed to the function
        numOfStud = size;
        grades = new double[numOfStud];
    }

    // copy constructor that does the deep-copy
    GradeBook(const GradeBook& src)
    {
        this->numOfStud = src.numOfStud;

        this->grades = new double[this->numOfStud];
        // copying the elements in the dynamic array
        for (int i = 0; i < numOfStud; i++)
        {
            grades[i] = src.grades[i];
        }
    }

    // whenever there is pointer data member in the class, destructor should be defined
    ~GradeBook()
    {
        delete[] this->grades;
    }

    void setGrade(double g, int stNum)
    {
        if (g < 0)
            g = 0;

        grades[stNum] = g;
    }

    void display()
    {
        for (int i = 0; i < numOfStud; i++)
        {
            cout << grades[i] << " ";
        }
    }
    // overloading assignment operator
    GradeBook& operator= (const GradeBook& right)
    {
        if (this != &right) // ensure that it's not x = x;
        {
            // deallocating the dynamic array of left operand
            delete[] grades; // delete [] this->grades;

            numOfStud = right.numOfStud;
            grades = new double[numOfStud];
            for (int i = 0; i < numOfStud; i++)
            {
                grades[i] = right.grades[i];
            }
        }
        return *this;
    }

    /* operator overloading
    - Most operators must be defined/overloaded for the class in order to apply them to the
      objects of the class, except the assignment operator (=), the address operator (&), and
      the comma operator (,).

    - 1. cannot create new operator
    - 2. cannot change the arity of the operator - binary operator remains binary, unary operator remains unary
    - 3. cannot change the precedence and associativity of the operator
    - 4. cannot change how the operator works with the existing datatype
    */
};