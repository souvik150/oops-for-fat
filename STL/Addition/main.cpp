#include <iostream>
using namespace std;

template <class T, class U>
U add(T a, U b)
{
  return a + b;
}

int main()
{
  cout << "Addition of the 2 numbers: " << add<float, float>(10.3, 11.5) << endl;
  cout << "Addition of the 2 numbers: " << add<int, int>(10, 11) << endl;
  cout << "Addition of the 2 numbers: " << add<int, float>(10, 11.11) << endl;

  return 0;
}
