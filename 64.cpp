/*64.C++ program to find ASCII Code for Characters, numbers and symbols  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout << "Enter a character : ";
   cin >> ch;
   cout << "ASCII Value of " << ch << " :" << int(ch);
   return 0;
}
/*Output
Enter a character : h
ASCII Value of h :104
*/