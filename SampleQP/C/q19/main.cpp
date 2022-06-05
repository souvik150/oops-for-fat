// Write down the names of 3 of your friends in an array and then sort those in alphabetically ascending order.

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
  string str[3], temp; // take temp variable for swapping to greater alphabet
  cout << "Enter names :" << endl;

  for (int i = 0; i < 3; i++) // run the loop till 3 and take into inputs
  {
    getline(cin, str[i]);
  }

  for (int i = 0; i < 3; i++)
    for (int j = i + 1; j < 3; ++j)
    {
      if (str[i] > str[j])
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  cout << "The names are :" << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << str[i] << endl;
  }

  return 0;
}