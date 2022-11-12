/*12.C++ Program to Calculate Average of Numbers Using Arrays  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int v, i;
    int num1[100], sum1 = 0.0, avg;

    cout << "Enter the number of elements: ";
    cin >> v;

    while (v > 100 || v <= 0)
    {
        cout << "Error! number should in range of between 1 to 100." << endl;
        cout << "Enter the number of elements again: ";
        cin >> v;
    }

    for (i = 0; i < v; ++i)
    {
        cout << i + 1 << ". Enter the numbers : ";
        cin >> num1[i];
        sum1 += num1[i];
    }

    avg = sum1 / v;
    cout << "Average = " << avg;

    return 0;
}
/*Output
Enter the number of elements: 5
1. Enter the numbers : 1
2. Enter the numbers : 2
3. Enter the numbers : 3
4. Enter the numbers : 5
5. Enter the numbers : 6
Average = 3.4

*/
