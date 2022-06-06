#include <iostream>
using namespace std;

class Counter
{
private:
  unsigned int count;

public:
  Counter()
  {
    count = 0;
  }
  unsigned int get_count()
  {
    return count;
  }
  void operator++()
  {
    ++count;
  }
};

int main()
{
  Counter c1, c2;

  cout << c1.get_count() << endl;

  ++c1;
  ++c2;

  cout << c2.get_count() << endl;

  ++c2;
  cout << c2.get_count() << endl;

  return 0;
}
