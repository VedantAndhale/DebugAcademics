/*37.C++ Program to Generate Multiplication Table  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num1, range1;

    cout << "Enter an Number for Multiplication: ";
    cin >> num1;

    cout << "Enter range: ";
    cin >> range1;

    for (int i = 1; i <= range1; ++i)
    {
        cout << num1 << " * " << i << " = " << num1 * i << endl;
    }

    return 0;
}
/*Output
Enter an Number for Multiplication: 74
Enter range: 10
74 * 1 = 74
74 * 2 = 148
74 * 3 = 222
74 * 4 = 296
74 * 5 = 370
74 * 6 = 444
74 * 7 = 518
74 * 8 = 592
74 * 9 = 666
74 * 10 = 740
*/
