/*61.C++ Program to Find Largest Number Among Three Numbers Using  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{

  int array1[3];
  cout << "Enter the three Numbers : ";
  for (int i = 0; i < 3; ++i)
  {
    cin >> array1[i];
  }

  for (int i = 1; i < 3; ++i)
  {
    if (array1[0] < array1[i])
      array1[0] = array1[i];
  }

  cout << "Largest Number = " << array1[0];

  return 0;
}

/*Output
Enter the three Numbers : 2
8
5
Largest Number = 8
*/