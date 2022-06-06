// Incomplete code

// #include <iostream>
// using namespace std;

// class Distance
// {
// private:
//   int feet;
//   float inches;

// public:
//   Distance()
//   {
//     feet = 0;
//     inches = 0;
//   }
//   Distance(int ft, float in)
//   {
//     feet = ft;
//     inches = in;
//   }
//   void getdist()
//   {
//     cout << "Enter the feet";
//     cin >> feet;
//     cout << "Enter the inches";
//     cin >> inches;
//   }

//   Distance operator+(Distance);
// };

// Distance Distance::operator+(Distance d2)
// {
//   int f = feet + d2.feet;
//   float i = inches + d2.inches;
//   if (i >= 12.0)
//   {
//     i -= 12.0;
//     f++;
//   }
//   return Distance(f, i);
// }
