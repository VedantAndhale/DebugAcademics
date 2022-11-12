/*20.C++ Program to Swap Numbers in Cyclic Order Using Call by Reference  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

void Swap_cyclic_order(int *num1, int *num2, int *num3)
{
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = *num3;
    *num3 = temp;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter Numbers For Swapping: ";
    cin >> num1 >> num2 >> num3;

    cout << "Numbers Before Swapping: " << endl;
    cout << num1 << ", " << num2 << ", " << num3 << endl;

    Swap_cyclic_order(&num1, &num2, &num3);

    cout << "Nubers after Swapping in cyclic order: " << endl;
    cout << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
/*Output
Enter Numbers For Swapping: 2 5 6
Numbers Before Swapping:
2, 5, 6
Nubers after Swapping in cyclic order:
6, 2, 5


*/
