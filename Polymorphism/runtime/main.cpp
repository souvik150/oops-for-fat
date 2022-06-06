// Concept if virtual is present only then the function will get overridden else it won't.

// If we add virtual then inheritance not there

#include <iostream>
using namespace std;

class Vit
{
public:
  virtual void vellore()
  {
    cout << "Welcome to VIT" << endl;
  }
  void python()
  {
    cout << "COVID-19" << endl;
  }
};

class Vit1 : public Vit
{
public:
  void vellore()
  {
    cout << "India is the best country" << endl;
  }
  void python()
  {
    cout << "Language" << endl;
  }
};

int main()
{
  Vit obj1;
  Vit1 obj2;

  Vit *ptr;
  ptr = &obj1;

  ptr->vellore();
  ptr->python();

  ptr = &obj2;

  ptr->vellore();
  ptr->python();

  return 0;
}