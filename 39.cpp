/*39.C++ Program to Find GCD  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num11, num12, gcd = 1;
    cout << "Enter two Number : ";
    cin >> num11 >> num12;
    for (int i = 1; i <= num11 || i <= num12; i++)
    {
        if (num11 % i == 0 && num12 % i == 0)
            gcd = i;
    }

    cout << "The GCD is " << gcd;

    return 0;
}
/*Output
Enter two Number : 5
45
The GCD is 5

*/
