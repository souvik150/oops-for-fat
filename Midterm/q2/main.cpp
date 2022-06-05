#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n, sale_qty[100], tot_qty = 0;
  float unit_price[100], total_unit = 0;
  float avg;
  cout << "Enter the number of items: ";
  cin >> n;
  if (n <= 100)
  {
    for (int i = 0; i < n; i++)
    {

      cout << "Enter unit price and quantity of item " << i + 1 << ": ";
      cin >> unit_price[i] >> sale_qty[i];
      if (unit_price[i] >= 0 && unit_price[i] <= 1000 && sale_qty[i] >= 0 && sale_qty[i] <= 1000)
      {
        total_unit += (unit_price[i] * sale_qty[i]);
        tot_qty += sale_qty[i];
      }
      else
        cout << "Values should be between 0 and 1000\n";
    }
    cout << "Total units amount is: " << total_unit;
    avg = static_cast<float>(tot_qty) / static_cast<float>(n);
    cout << "\nAverage unit quantity is: " << fixed << setprecision(1) << avg;
  }
  else
    cout << "Number of items should be less than 1000";

  return 0;
}