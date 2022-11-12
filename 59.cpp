/*59.C++ program to find Palindrome number  .
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

    if (n == reverse1)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    return 0;
}
/*Output
Enter a number: 444
 The reverse of the number is: 444
 The number is a palindrome.
 */
