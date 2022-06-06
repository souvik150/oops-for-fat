#include <iostream>
using namespace std;

class Vit
{
public:
  Vit()
  {
    cout << "Welcome to VIT" << endl;
  }
  Vit(int a)
  {
    cout << "The constructor with arugument" << endl;
    cout << "a=" << a << endl;
  }
};

int main()
{
  Vit obj;
  Vit obj1(5);

  return 0;
}
