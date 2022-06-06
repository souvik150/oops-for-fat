#include <bits/stdc++.h>
using namespace std;

void printWords(string str)
{
  string word;
  stringstream iss(str);

  while (iss >> word)
  {
    reverse(word.begin(), word.end());
    cout << word << ".";
  }
}

int main()
{
  string s = "www.google.com";
  printWords(s);
  return 0;
}
