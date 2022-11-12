/*26.C++ Program to Copy Strings  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str11, str12;
    cout << "Enter any string: ";
    getline(cin, str11);
    str12 = str11;
    cout << "Given string = " << str11 << endl;
    cout << "Copy of given string = " << str12;
    return 0;
}
/*output
Enter any string: hello vedant
Given string  = hello vedant
Copy of given string = hello vedant
*/
