/*25.C++ Program to Concatenate Two Strings .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str11, str12, final_string;
    cout << "Enter 1st string: ";
    getline(cin, str11);
    cout << "Enter 2nd string: ";
    getline(cin, str12);
    final_string = str11 + str12;
    cout << "Concatenated String = " << final_string;
    return 0;
}
/*Output
Enter 1st string: Vedant aka
Enter 2nd string:  SilentNerve_
Concatenated String = Vedant aka  SilentNerve_
*/
