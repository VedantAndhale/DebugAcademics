/*54.C++ Program to Find Size of int, float, double and char in Your System  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of character is " << sizeof(char) << " byte" << endl;
    cout << "Size of integer is " << sizeof(int) << " bytes" << endl;
    cout << "Size of float is " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is " << sizeof(double) << " bytes" << endl;

    return 0;
}
/*Output
Size of character is 1 byte
Size of integer is 4 bytes
Size of float is 4 bytes
Size of double is 8 bytes

*/
