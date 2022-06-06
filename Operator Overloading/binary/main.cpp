#include <iostream>
using namespace std;

class Vit
{
  int a;

public:
  Vit()
  {
    a = 10;
  }

  void operator--()
  {
    --a;
  }

  void display()
  {
    cout << a << endl;
  }
};

int main()
{
  Vit c1;

  c1.display();
  --c1;
  c1.display();
}
