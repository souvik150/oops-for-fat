// Create a class to represent a bank account with the following data members and member functions
// Data members : Name, Accno, Type of Account (SB/CUR) and Balance
// Member functions
// assign initial values ( make use of constructors ) deposit an amount - [D for deposit] withdraw an amount [W- for withdrawal] after verifying the balance [ FOR SB a/c balance > 1000 for Current A/c balance >5000]
// display the name and balance

#include <iostream>
#include <string.h>
using namespace std;

class Account
{
public:
  string name;
  int accno;
  string type;
  int balance;

public:
  Account()
  {
    name = "Default Account";
    accno = 0;
    type = "SB";
    balance = 0;
  }

  Account(string name, int accno, int type, int balance)
  {
    name = name;
    accno = accno;
    type = type;
    balance = balance;
  }

  void deposit(int amount)
  {
    balance = balance + amount;
  }

  void withdraw(int amount)
  {
    balance = balance + amount;
  }
};

// int main(){
//   Account = {""}

//   return 0;
// }