#include <iostream>
using namespace std;

template <class T>
class BC
{
public:
  int size;
  T *arr;

  BC(int n)
  {
    size = n;
    arr = new T[n];
  }

  void input()
  {
    for (int i = 0; i < size; i++)
      cin >> arr[i];
  }
};

template <class T>
class DC : public BC<T>
{
public:
  DC(int n) : BC<T>(n) {}

  void countFrequency()
  {
    int n = BC<T>::size;
    T items[n];

    int p = 0, found, count;

    for (int i = 0; i < n; i++)
    {
      found = 0;

      for (int j = 0; j < p; j++)
      {
        if (BC<T>::arr[i] == items[j])
        {
          found = 1;
          break;
        }
      }

      if (!found)
      {
        count = 0;
        for (int j = i; j < n; j++)
        {
          if (BC<T>::arr[i] == BC<T>::arr[j])
            count++;
        }

        cout << BC<T>::arr[i] << " - " << count << endl;

        items[p] = BC<T>::arr[i];
        p++;
      }
    }
  }
};

int main()
{
  int n;

  cout << "Input the integer array size (N): ";
  cin >> n;

  DC<int> dc_int(n);

  cout << "Input the elements of the integer array: ";
  dc_int.input();

  cout << "Frequency of elements in the int array" << endl;
  dc_int.countFrequency();

  cout << "\nInput the float array size (N): ";
  cin >> n;

  DC<float> dc_float(n);

  cout << "Input the elements of the float array: ";
  dc_float.input();

  cout << "Frequency of elements in the float array" << endl;
  dc_float.countFrequency();

  return 0;
}