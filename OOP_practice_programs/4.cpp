/*4. C++ program to Find Sum of Natural Numbers using Recursion  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int add(int num1);

int main()
{
    int num1;

    cout << "Enter a integer: ";
    cin >> num1;

    cout << "Sum of natural numbers =  " << add(num1);

    return 0;
}

int add(int num1)
{
    if (num1 != 0)
        return num1 + add(num1 - 1);
    return 0;
}
/*output
Enter a integer: 5
Sum =  15
*/
