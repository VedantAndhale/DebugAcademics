/*19.C++ Program to Access Elements of an Array Using Pointer  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
   int array1[5];
   cout << "Enter Numbers in array: ";

   for (int i = 0; i < 5; ++i)
      cin >> array1[i];

   cout << "Given Numbers Accessed using Pointer: ";
   for (int i = 0; i < 5; ++i)
      cout << endl
           << *(array1 + i);

   return 0;
}
/*Output
Enter Numbers in array: 1
2
3
4
5
Given Numbers Accessed using Pointer:
1
2
3
4
5

*/