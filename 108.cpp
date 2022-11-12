/*108. C++ program to Find Transpose of a Matrix  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
   int array1[5][5], transpose1[5][5], row1, column1, i, j;

   cout << "Enter number of rows and columns of matrix respectively: ";
   cin >> row1 >> column1;

   cout << "\nEnter elements in the matrix: " << endl;

   // Storing elements
   for (int i = 0; i < row1; ++i)
   {
      for (int j = 0; j < column1; ++j)
      {
         cout << "Enter element " << i + 1 << "x" << j + 1 << ": ";
         cin >> array1[i][j];
      }
   }

   // Printing matrix
   cout << "\nGiven Matrix: " << endl;
   for (int i = 0; i < row1; ++i)
   {
      for (int j = 0; j < column1; ++j)
      {
         cout << " " << array1[i][j];
         if (j == column1 - 1)
            cout << endl
                 << endl;
      }
   }

   // find transpose
   for (int i = 0; i < row1; ++i)
      for (int j = 0; j < column1; ++j)
      {
         transpose1[j][i] = array1[i][j];
      }

   // Print transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column1; ++i)
      for (int j = 0; j < row1; ++j)
      {
         cout << " " << transpose1[i][j];
         if (j == row1 - 1)
            cout << endl
                 << endl;
      }

   return 0;
}
/*Output
Enter number of rows and columns of matrix respectively: 2
3

Enter elements in the matrix:
Enter element 1x1: 2
Enter element 1x2: 5
Enter element 1x3: 8
Enter element 2x1: 3
Enter element 2x2: 6
Enter element 2x3: 9

Given Matrix:
 2 5 8

 3 6 9


Transpose of Matrix:
 2 3

 5 6

 8 9


*/