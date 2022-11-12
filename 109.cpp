/*109. C++ code to Add Two Matrix  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int row1, column1, v[100][100], a[100][100], sum1[100][100], i, j;

    cout << "Enter number of rows between 1 to 100: ";
    cin >> row1;

    cout << "Enter number of columns between 1 to 100: ";
    cin >> column1;

    cout << endl
         << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column1; ++j)
        {
            cout << "Enter element of 1st matrix " << i + 1 << "x" << j + 1 << " : ";
            cin >> v[i][j];
        }

    // Storing elements of second matrix entered by user.
    cout << endl
         << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column1; ++j)
        {
            cout << "Enter element of 1st matrix " << i + 1 << "x" << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Adding Two matrices
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column1; ++j)
            sum1[i][j] = v[i][j] + a[i][j];

    // Displaying the final sum matrix.
    cout << endl
         << "Addition of two matrix is: " << endl;
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column1; ++j)
        {
            cout << sum1[i][j] << "  ";
            if (j == column1 - 1)
                cout << endl;
        }

    return 0;
}
/*
Enter number of rows between 1 to 100: 5
Enter number of columns between 1 to 100: 2

Enter elements of 1st matrix:
Enter element of 1st matrix 1x1 : 2
Enter element of 1st matrix 1x2 : 5
Enter element of 1st matrix 2x1 : 8
Enter element of 1st matrix 2x2 : 3
Enter element of 1st matrix 3x1 : 6
Enter element of 1st matrix 3x2 : 9
Enter element of 1st matrix 4x1 : 7
Enter element of 1st matrix 4x2 : 4
Enter element of 1st matrix 5x1 : 1
Enter element of 1st matrix 5x2 : 5

Enter elements of 2nd matrix:
Enter element of 2nd matrix 1x1 : 5
Enter element of 2nd matrix 1x2 : 2
Enter element of 2nd matrix 2x1 : 6
Enter element of 2nd matrix 2x2 : 36
Enter element of 2nd matrix 3x1 : 2
Enter element of 2nd matrix 3x2 : 4
Enter element of 2nd matrix 4x1 : 5
Enter element of 2nd matrix 4x2 : 6
Enter element of 2nd matrix 5x1 : 35
Enter element of 2nd matrix 5x2 : 6

Sum of two matrix is:
7  7
14  39
8  13
12  10
36  11

*/