#include <iostream>
#include <string.h>
using namespace std;

int totalFruits = 0;

class Fruit
{
private:
  int nFruits = 0;

public:
  void setNumOfFruits(int nFruits)
  {
    this->nFruits = nFruits;
  }
  void display(string fruitname)
  {
    cout << "\nTotal No. of " << fruitname << " are " << nFruits;
  }
};

class Mangoes : public Fruit
{
private:
  int nMango;

public:
  void setNumOFMangoes(int nMango)
  {
    this->nMango = nMango;
    totalFruits += nMango;

    setNumOfFruits(nMango);
  }
};

class Apples : public Fruit
{
private:
  int nApple;

public:
  void setNumOfApples(int nApple)
  {
    this->nApple = nApple;
    totalFruits += nApple;

    setNumOfFruits(nApple);
  }
};

int main()
{

  Fruit f;
  Mangoes m;
  Apples a;

  int amount;

  cout << "Total number of apples : ";
  cin >> amount;
  a.setNumOfApples(amount);

  cout << "Total number of Mangoes : ";
  cin >> amount;
  m.setNumOFMangoes(amount);

  a.display("apples");
  m.display("Mangoes");
  cout << "\nTotal No. of Fruits are " << totalFruits;

  return 0;
}