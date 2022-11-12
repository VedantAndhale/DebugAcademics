/*30.C++ Program to Check Whether Number is Even or Odd  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if (n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}
/*Output
Enter an integer: 5
5 is odd.
*/
