// Create class employee with ENO, ENAME, EDEPT, SALARY and the member functions ReadData(), PrintData(). your program to read N employee details using array of objects and extract only those employees who are working in MARKETING and
// drawing salary less than 15000

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
  int eno;
  string name;
  string department;
  int salary;

public:
  void readdata()
  {
    cin >> eno;
    cin >> name;
    cin >> department;
    cin >> salary;
  };
  void printdata()
  {
    cout << "The details of the employee are:" << endl;
    cout << eno;
    cout << name;
    cout << department;
    cout << salary;
  };
};

int main()
{

  int n;
  cout << "The number of employees" << endl;
  cin >> n;
  Employee e[n];

  for (int i = 0; i < n; i++)
  {
    e[i].readdata();
  }

  for (int i = 0; i < n; i++)
  {
    if (e[i].salary > 10000 && e[i].department == "MARKETING")
    {
      e[i].printdata();
    }
  }

  return 0;
}