/*36.C++ Program to Find Factorial  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial = 1;

    cout << "Enter a integer: ";
    cin >> n;

    if (n < 0)
        cout << "non +ve number";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}
/*Output
Enter a integer: 5
Factorial of 5 = 120
*/
