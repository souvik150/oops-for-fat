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

  ++c1;
  ++c2;
  ++c2;

  return 0;
}
