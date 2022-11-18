/*41.C++ Progr am to Reverse a Number  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int n, num1, digit1, reverse1 = 0;

    cout << "Enter a number: ";
    cin >> num1;

    n = num1;

    do
    {
        digit1 = num1 % 10;
        reverse1 = (reverse1 * 10) + digit1;
        num1 = num1 / 10;
    } while (num1 != 0);

    cout << " The reverse of the number is: " << reverse1 << endl;

    return 0;
}
/*Output
Enter a number: 432
 The reverse of the number is: 234

 */
