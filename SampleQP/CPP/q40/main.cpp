//  We want to calculate the total marks of each student of a class in Physics,Chemistry and
// Mathematics and the average marks of the class. The number of students in the class are entered by
// the user. Create a class named Marks with data members for roll number, name and marks. Create
// three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which
// are used to define marks in individual subject of each student. Roll number of each student will be
// generated automatically.

#include <iostream>
using namespace std;

class Marks
{
public:
  int roll_no;
  char name[20];
  int marks;
  void getValues()
  {
    cout << "\nEnter Roll No. : " << endl;
    cin >> roll_no;
    cout << "Enter Name : " << endl;
    cin >> name;
  }
};

class Physics : public Marks
{
public:
  int get_phymarks()
  {
    cout << "\nEnter Physics Marks : " << endl;
    cin >> marks;
    return marks;
  }
};

class Chemistry : public Marks
{
public:
  int get_chemmarks()
  {
    cout << "\nEnter Chemistry Marks : " << endl;
    cin >> marks;
    return marks;
  }
};

class Mathematics : public Marks
{
public:
  int get_mathmarks()
  {
    cout << "\nEnter Mathematics Marks : " << endl;
    cin >> marks;
    return marks;
  }
};

int main()
{
  int n;
  double a, b, c;

  cout << "Enter the total number of students : " << '\n';
  cin >> n;

  double total[n];
  Marks students[n];
  Physics p1[n];
  Chemistry c1[n];
  Mathematics m1[n];

  cout << "Details of students : " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "\nRoll number alloted : " << i + 1;
    students[i].getValues();
    a = p1[i].get_phymarks();
    b = c1[i].get_chemmarks();
    c = m1[i].get_mathmarks();
    total[i] = a + b + c;

    cout << "\nTotal marks of student " << i + 1 << " : " << total[i] << endl;
  }

  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += total[i];
  }

  cout << "\nAverage marks of the class : " << sum / n;
  return 0;
}