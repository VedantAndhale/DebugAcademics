/*13.C++ Program to Find Largest Element of an Array  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{

  int i, n;
  float array1[100];

  cout << "Enter total number of elements in array: ";
  cin >> n;
  cout << endl;

  cout << "Enter Number in array : ";
  for (i = 0; i < n; ++i)
  {
    cin >> array1[i];
  }

  for (i = 1; i < n; ++i)
  {
    if (array1[0] < array1[i])
      array1[0] = array1[i];
  }

  cout << "Largest element in the array = " << array1[0];

  return 0;
}
/*Output
Enter total number of elements in array: 5

Enter Number in array : 1
5
9
7
5
Largest element in the array = 9

*/
