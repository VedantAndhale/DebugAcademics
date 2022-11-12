/*44.C++ Program to Check Whether a Number is Prime or Not  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int num, i, count = 0;

    cout << "Enter the number to check : ";

    cin >> num;

    if (num == 0)

    {

        cout << "\n"
             << num << " is not prime";

        exit(1);
    }

    else
    {

        for (i = 2; i < num; i++)

            if (num % i == 0)

                count++;
    }

    if (count > 1)

        cout << num << " is not prime.";

    else

        cout << num << " is prime.";

    return 0;
}
/*Output
Enter the number to check : 83
83 is prime.
*/
