#include <iostream>
#include <string>

using namespace std;

class Applicants
{
private:
    int number; // the amount of applicants
    string* names;  // names of all applicants
    double* entrance; // entrance exam scores of all applicants

public:

    Applicants(int n) {
        number = n;
        names = new string [n];
        entrance = new double[n];
    }
    Applicants(int n, string* name, double* entrances) {
        int number = n;
        names = new string[n];
        entrance = new double[n];
        for (int i = 0; i < n; i++) {
            names[i] = name[i];
            entrance[i] = entrances[i];
        }
    }
    ~Applicants() {
        cout << "Destruction of object!" << endl;
        delete[] names;
        delete[] entrance;
    }
    void setName(int i, string n)
    {
        names[i] = n;
    }
    void setEntrance(int i, double score)
    {
        if (score < 0) score = 0;
        entrance[i] = score;
    }

    string getName(int i) const
    {
       
        return names[i];
    }
    int getNumber() const {
        return number;
    }
    double getEntrance(int i) const
    {
        return entrance[i];
    }

    Applicants& operator= (const Applicants& right)
    {
        if (this != &right) 
        {
            delete[] names; 
            delete[] entrance;

            number = right.number;
            names = new string [number];
            entrance = new double[number];

            for (int i = 0; i < number; i++)
            {
                names[i] = right.names[i];
                entrance[i] = right.entrance[i];
            }
        }
        return *this;
    }
};

void getDepartment(string arr[]) {
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter the deparment: ";
        cin >> arr[i];
        cout << endl;
    }

}
void getMinScore(double arr[], string arr2[]) {
  
    for (int i = 0; i < 5; i++) {

        cout << "Enter the minimum score for " << arr2[i] << ": ";
        cin >> arr[i];
        cout << endl;
    }
    cout << endl;
}

void printTable(Applicants obj, string depart[], double scoreMin[]) {
    int count1 = 0, count2 =0, count3 = 0, count4 = 0, count5 = 0;
    for (int i = 0; i < obj.getNumber(); i++) {
        if (scoreMin[i] == obj.getEntrance(i)){
            cout << obj.getName(i) << " " << obj.getEntrance(i) << endl;
            count1 += 1;
            if (i == obj.getNumber() - 1)
                cout << "The total amount of applicant is " << count1;
        }
        else if (scoreMin[i+1] == obj.getEntrance(i)) {
            cout << obj.getName(i) << " " << obj.getEntrance(i) << endl;
            count2 += 1;
            if (i == obj.getNumber() - 1)
                cout << "The total amount of applicant is " << count2;
        }
        else if (scoreMin[i + 2] == obj.getEntrance(i)) {
            cout << obj.getName(i) << " " << obj.getEntrance(i) << endl;
            count3 += 1;
            if (i == obj.getNumber() - 1)
                cout << "The total amount of applicant is " << count3;
        }
        else if (scoreMin[i + 3] == obj.getEntrance(i)) {
            cout << obj.getName(i) << " " << obj.getEntrance(i) << endl;
            count4 += 1;
            if (i == obj.getNumber() - 1)
                cout << "The total amount of applicant is " << count4;
        }
        else if (scoreMin[i + 4] == obj.getEntrance(i)) {
            cout << obj.getName(i) << " " << obj.getEntrance(i) << endl;
            count5 += 1;
            if (i == obj.getNumber() - 1)
                cout << "The total amount of applicant is " << count5;
        }

    }
}

int main() {
    int numOfApp = 0;
    string department[5];
    double minScore[5];
  
    string* names = new string[numOfApp];

    cout << "Enter the number of applicants: " << endl;
    cin >> numOfApp;
    double* entrance = new double[numOfApp];

    getDepartment(department);
    getMinScore(minScore, department);

  /*  for (int i = 0; i < 5; i++) {
        cout << department[i] << minScore[i];
        cout << endl;
    }*/

    for (int i = 0; i < numOfApp; i++) {
        cout << "Enter the name of the applicant " << i + 1 << " ";
        cin >> names[i];
        cout << "Enter the score for " << names[i] << ":";
        cout << endl;
   }

    Applicants batch1(numOfApp, names, entrance);
    printTable(batch1, department, minScore);

    
    delete[] names;
    delete[] entrance;
    return 0; 
}