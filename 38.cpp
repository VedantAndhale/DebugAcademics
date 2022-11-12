/*38.C++ Program to Display Fibonacci Series  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int a1 = 0, b1 = 1;
    cout << "Enter Nth Number : ";
    cin >> num1;
    // Here we are printing 0th and 1st terms
    cout << a1 << ", " << b1 << ", ";

    int nextnumb1;

    // printing the rest of the terms here
    for (int i = 2; i < num1; i++)
    {
        nextnumb1 = a1 + b1;
        a1 = b1;
        b1 = nextnumb1;

        cout << nextnumb1 << ", ";
    }

    return 0;
}
/*Output
Enter Nth Number : 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
*/
