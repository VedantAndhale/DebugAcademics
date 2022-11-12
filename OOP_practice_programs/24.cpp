/*24.C++ Program to Find the Length of a String  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str1;
    cout << "Enter string: ";
    getline(cin, str1);
    cout << "Length of string = " << str1.length();
    return 0;
}

/*Output
Enter string: Vedant Andhale
Length of string = 14

*/
// remeber it counts whitspace also
