#include <iostream>
using namespace std;

class Counter
{
private:
  int count;

public:
  Counter()
  {
    count = 0;
  }
  Counter(int c)
  {
    count = c;
  }
  int get_count()
  {
    return count;
  }
  Counter operator++()
  {
    ++count;
    return Counter(count);
  }
};

int main()
{
  Counter c1, c2;

  cout << c1.get_count() << endl;
  cout << c2.get_count() << endl;

  ++c1;
  c2 = ++c1;

  cout << c1.get_count() << endl;
  cout << c2.get_count() << endl;

  return 0;
}