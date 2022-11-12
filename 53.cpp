/*53.C++ Program to Find Quotient and Remainder  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int divisor1, dividend1, quotient1, remainder1;

    cout << "Enter dividend Number : ";
    cin >> dividend1;

    cout << "Enter divisor Number : ";
    cin >> divisor1;

    quotient1 = dividend1 / divisor1;
    remainder1 = dividend1 % divisor1;

    cout << "Quotient is " << quotient1 << endl;
    cout << "Remainder is " << remainder1;

    return 0;
}
/*Output
Enter dividend Number : 5
Enter divisor Number : 8
Quotient is 0
Remainder is 5
*/
