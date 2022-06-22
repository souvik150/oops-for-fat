#include <iostream>
using namespace std;

template <typename T, typename U>

class Vit
{
private:
  T x;
  U y;

public:
  Vit(T z, U m)
  {
    x = z;
    y = m;
  }
  U add()
  {
    return (x + y);
  }
};

int main()
{
  Vit<int, int> obj1(2, 3);
  Vit<float, float> obj2(2.4, 3.4);
  Vit<int, float> obj3(2, 3.4);

  cout << obj1.add() << endl;
  cout << obj2.add() << endl;
  cout << obj3.add() << endl;

  return 0;
}
