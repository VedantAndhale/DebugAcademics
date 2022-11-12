/*46.C++  Program to Check Armstrong Number  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num1, originalNum1, remainder1, result1 = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num1;
    originalNum1 = num1;

    while (originalNum1 != 0)
    {

        remainder1 = originalNum1 % 10;

        result1 += remainder1 * remainder1 * remainder1;

        // removing last digit from the orignal number
        originalNum1 /= 10;
    }

    if (result1 == num1)
        cout << num1 << " is an Armstrong number.";
    else
        cout << num1 << " is not an Armstrong number.";

    return 0;
}
/*Output
Enter a three-digit integer: 153
153 is an Armstrong number.
*/
