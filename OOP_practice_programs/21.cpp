/*21.C++ Program to Find the Frequency of Characters  in a String  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str1;
    char checkch;
    cout << "Enter string: ";
    getline(cin, str1);
    cout << "Enter Character to search: ";
    cin >> checkch;
    int count = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == checkch)
        {
            ++count;
        }
    }

    cout << "Number of " << checkch << " = " << count;

    return 0;
}
/*Output
Enter string: Vedant Andhale
Enter Character to search: a
Number of a = 2
*/
// make compatiplw to count upper and lowercase togehter
