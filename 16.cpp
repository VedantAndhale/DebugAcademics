/*16.C++ Program to Multiply Two Matrix Using Multi -Dimensional Arrays  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    int v[10][10], a[10][10], multid[10][10], row1, column1, row2, column2, i, j, k;

    cout << "Enter rows and columns of 1st matrix: ";
    cin >> row1 >> column1;
    cout << "Enter rows and columns of 2nd matrix: ";
    cin >> row2 >> column2;

    // check multiplication cond==false ask again
    while (column1 != row2)
    {
        cout << "Error! column of 1st matrix not equal to row of 2nd.";

        cout << "\nEnter rows and columns of 1st matrix: ";
        cin >> row1 >> column1;

        cout << "\nEnter rows and columns of 2nd matrix: ";
        cin >> row2 >> column2;
    }

    // Storing 1st matrix.
    cout << endl
         << "Enter elements of 1st matrix :" << endl;
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column1; ++j)
        {
            cout << "Enter elements " << i + 1 << "x" << j + 1 << " : ";
            cin >> v[i][j];
        }

    // Storing 2nd matrix.
    cout << endl
         << "Enter elements of 2nd matrix :" << endl;
    for (i = 0; i < row2; ++i)
        for (j = 0; j < column2; ++j)
        {
            cout << "Enter elements " << i + 1 << "x" << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Initializing new multiarray for operation.
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column2; ++j)
        {
            multid[i][j] = 0;
        }

    // Multiplying matrix 1 and 2 and put in array mult.
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column2; ++j)
            for (k = 0; k < column1; ++k)
            {
                multid[i][j] += v[i][k] * a[k][j];
            }

    // Display multi of  matrix.
    cout << endl
         << "Final Matrix: " << endl;
    for (i = 0; i < row1; ++i)
        for (j = 0; j < column2; ++j)
        {
            cout << " " << multid[i][j];
            if (j == column2 - 1)
                cout << endl;
        }

    return 0;
}
/*Output
Enter rows and columns of 1st matrix: 2
3
Enter rows and columns of 2nd matrix: 2
3
Error! column of 1st matrix not equal to row of 2nd.
Enter rows and columns of 1st matrix: 2
3

Enter rows and columns of 2nd matrix: 3
2

Enter elements of 1st matrix :
Enter elements 1x1 : 2
Enter elements 1x2 : 3
Enter elements 1x3 : 6
Enter elements 2x1 : 5
Enter elements 2x2 : 4
Enter elements 2x3 : 8

Enter elements of 2nd matrix :
Enter elements 1x1 : 6
Enter elements 1x2 : 3
Enter elements 2x1 : 5
Enter elements 2x2 : 6
Enter elements 3x1 : 2
Enter elements 3x2 : 4

Final Matrix:
 39 48
 66 71


*/
