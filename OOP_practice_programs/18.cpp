/*18.C++ Program to Multiply two Matrices by Passing Matrix to Function  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;
void MatrixMultiplication(int a[2][3], int b[3][3])
{
	int product[10][10], r1 = 2, c1 = 3, r2 = 3, c2 = 3, i, j, k;
	if (c1 != r2)
	{
		cout << "Column of first matrix should be equal to row of second matrix";
	}
	else
	{
		cout << "The first matrix is:" << endl;
		for (i = 0; i < r1; ++i)
		{
			for (j = 0; j < c1; ++j)
				cout << a[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		cout << "The second matrix is:" << endl;
		for (i = 0; i < r2; ++i)
		{
			for (j = 0; j < c2; ++j)
				cout << b[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		for (i = 0; i < r1; ++i)
			for (j = 0; j < c2; ++j)
			{
				product[i][j] = 0;
			}
		for (i = 0; i < r1; ++i)
			for (j = 0; j < c2; ++j)
				for (k = 0; k < c1; ++k)
				{
					product[i][j] += a[i][k] * b[k][j];
				}
		cout << "Product of the two matrices is:" << endl;
		for (i = 0; i < r1; ++i)
		{
			for (j = 0; j < c2; ++j)
				cout << product[i][j] << " ";
			cout << endl;
		}
	}
}
int main()
{
	int a[2][3], b[3][3],i,j,k;

	cout << endl
		  << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < 2; ++i)
		for (j = 0; j < 3; ++j)
		{
			cout << "Enter element of 1st matrix " << i + 1 << "x" << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl
		  << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			cout << "Enter element of 1st matrix " << i + 1 << "x" << j + 1 << " : ";
			cin >> b[i][j];
		}

	MatrixMultiplication(a, b);
	return 0;
}
/*
Output
Enter elements of 1st matrix: 
Enter element of 1st matrix 1x1 : 1
Enter element of 1st matrix 1x2 : 2
Enter element of 1st matrix 1x3 : 3
Enter element of 1st matrix 2x1 : 4
Enter element of 1st matrix 2x2 : 5
Enter element of 1st matrix 2x3 : 6

Enter elements of 2nd matrix: 
Enter element of 1st matrix 1x1 : 7
Enter element of 1st matrix 1x2 : 8
Enter element of 1st matrix 1x3 : 5
Enter element of 1st matrix 2x1 : 2
Enter element of 1st matrix 2x2 : 3
Enter element of 1st matrix 2x3 : 6
Enter element of 1st matrix 3x1 : 9
Enter element of 1st matrix 3x2 : 8
Enter element of 1st matrix 3x3 : 7
The first matrix is:
1 2 3 
4 5 6 

The second matrix is:
7 8 5 
2 3 6 
9 8 7 

Product of the two matrices is:
38 38 38 
92 95 92 


*/