/*39.C++ Program to Find GCD  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    if(a%b==0)
        return b;
    return gcd(b, a % b);
}
int main()
{
    int num11, num12;
    cout << "Enter two Number : ";
    cin >> num11 >> num12;
    cout << "The GCD is " << gcd(num11,num12);

    return 0;
}
/*Output
Enter two Number : 5
45
The GCD is 5

*/