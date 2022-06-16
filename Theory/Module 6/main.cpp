#include <iostream>
using namespace std;

class Student
{
public:
  int roll_no;

public:
  void getdata()
  {
    cout << "Enter roll number";
    cin >> roll_no;
  }
  void putdata()
  {
    cout << "Roll number is:" << roll_no << endl;
  }
};

class Test : public Student
{
public:
  int marksub1;
  int marksub2;

public:
  void getmarksub1()
  {
    cout << "Marks subject 1:" << marksub1 << endl;
  }
  void getmarksub2()
  {
    cout << "Marks subject 2:" << marksub2 << endl;
  }
  void putmarksub1()
  {
    cin >> marksub1;
  }
  void putmarksub2()
  {
    cin >> marksub2;
  }
};

class Grade
{
  char grade;

  void display_grade()
  {
    cout << grade;
  }

  friend class Result;
};

class Result : public Test, private Grade
{
public:
  int total;
  int average;

  void total_marks()
  {
    total = marksub1 + marksub2;
    average = total / 2;
  }

  void set_grade()
  {
    if (average > 90)
    {
      grade = 'A';
    }
    else if (average > 80 && average < 90)
    {
      grade = 'B';
    }

    else if (average > 70 && average < 80)
    {
      grade = 'C';
    }

    cout << "The student's grade is " << grade << endl;
  }
};

int main()
{
  Result student1;

  student1.putmarksub1();
  student1.putmarksub2();

  student1.getmarksub1();
  student1.getmarksub2();

  student1.total_marks();
  student1.set_grade();

  return 0;
}
