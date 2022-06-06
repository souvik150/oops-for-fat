#include <iostream>
#include <string.h>

using namespace std;

class hello
{
public:
  string x;
  hello()
  {
    x = "Null";
  }
  hello(string a)
  {
    x = a;
  }
  void display()
  {
    cout << "The value of x is: " << x << endl;
  }

  hello operator+(hello &t)
  {
    hello temp;
    temp.x = x + "_" + t.x;
    return temp;
  }
};

int main()
{
  hello obj1("C"), obj2("C++");
  hello obj3;

  obj3 = obj1 + obj2;
  obj3.display();

  return 0;
}