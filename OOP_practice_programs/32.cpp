/*32.C++ Program to Find Largest Number Among Three Numbers  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "Largest number: " << num1;

    else if (num2 >= num1 && num2 >= num3)
        cout << "Largest number: " << num2;

    else if (num3 >= num1 && num3 >= num2)
        cout << "Largest number: " << num3;

    return 0;
}
/*Output
Enter the three Numbers : 2
8
5
Largest Number = 8
*/
