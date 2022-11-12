/*35.C++ Program to Check Leap year .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{

  int year1;
  cout << "Enter a year: ";
  cin >> year1;

  // leap year if perfectly divisible by 400
  if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
  {
    cout << year1 << " is a leap year.";
  }
  else
  {
    cout << year1 << " is not a leap year.";
  }

  return 0;
}
/*Ouput
Enter a year: 2016
2016 is a leap year.

*/
