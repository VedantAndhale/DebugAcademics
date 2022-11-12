/*5. C++ program to Calculate Factorial of a Number Using Recursion  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int factorial1(int num1)
{
  if (num1 > 1)
    return num1 * factorial1(num1 - 1);
  else
    return 1;
}

int main()
{

  int num1;

  cout << "Enter a integer: ";
  cin >> num1;

  cout << "Factorial of " << num1 << " is " << factorial1(num1);

  return 0;
}

/*output
Enter a integer: 5
Factorial of 5 is 120
*/
