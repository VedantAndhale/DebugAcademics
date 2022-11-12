/*14.C++ Program to Calculate Standard Deviation  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <bits/stdc++.h>
using namespace std;

float Standard_Deviation(float array1[])
{
  float total = 0.0, mean1, stdDeviation = 0.0;
  int i;

  for (i = 0; i < 10; ++i)
  {
    total += array1[i];
  }

  mean1 = total / 10;

  for (i = 0; i < 10; ++i)
  {
    stdDeviation += pow(array1[i] - mean1, 2);
  }

  return sqrt(stdDeviation / 10);
}

int main()
{
  int i;
  float array[10];

  cout << "Enter elements: ";
  for (i = 0; i < 10; ++i)
  {
    cin >> array[i];
  }

  cout << endl
       << "Standard Deviation of given elements = " << Standard_Deviation(array);

  return 0;
}

/*Output
Enter elements: 5
2
3
6
3
9
8
40
5
2

Standard Deviation of given elements = 10.8079
*/