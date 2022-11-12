/*48.C++ Program to Display Factors of a Number  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num1, i;

    cout << "Enter a integer: ";
    cin >> num1;

    cout << "Factors of " << num1 << " are: ";
    for (i = 1; i <= num1; ++i)
    {
        if (num1 % i == 0)
            cout << i << " ";
    }

    return 0;
}
/*Output
Enter a integer: 8
Factors of 8 are: 1 2 4 8

*/
