#include <iostream>
using namespace std;

template <class T>
int swap_numbers(T &x, T &y)
{
  T t;
  t = x;
  x = y;
  y = t;
  return 0;
}

int main()
{
  int a = 20;
  int b = 40;
  swap_numbers<int>(a, b);
  cout << a << " " << b << endl;

  char z = 'q';
  char x = 'w';
  swap_numbers<char>(z, x);
  cout << z << " " << x << endl;

  return 0;
}
