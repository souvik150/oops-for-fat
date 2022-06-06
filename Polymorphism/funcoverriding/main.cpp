#include <iostream>
using namespace std;

class Vit
{
public:
  void add()
  {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a + b;
  }
};

class Vit1 : public Vit
{
public:
  void add()
  {
    float a, b;
    cin >> a;
    cin >> b;
    cout << a - b;
  }
};

int main()
{
  Vit1 obj;
  obj.add();

  return 0;
}