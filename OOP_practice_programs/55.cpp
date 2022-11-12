/*55.C++ Program to Swap Two Numbers  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num11, num12, temp;
    cout << "Enter Numbers for swapping : ";
    cin >> num11 >> num12;
    cout << "Before swapping." << endl;
    cout << "First Number = " << num11 << ", Second Number = " << num12 << endl;

    temp = num11;
    num11 = num12;
    num12 = temp;

    cout << "\nAfter swapping." << endl;
    cout << "First Number = " << num11 << ", Second Number = " << num12 << endl;

    return 0;
}
/*Output
Enter Numbers for swapping : 5
2
Before swapping.
First Number = 5, Second Number = 2

After swapping.
First Number = 2, Second Number = 5
*/
