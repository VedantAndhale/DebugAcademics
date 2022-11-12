/*42.C++ Program to Calculate Power of a Number  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int base1, power1;
	cout << "Enter base number: ";
	cin >> base1;

	cout << "Enter power number: ";
	cin >> power1;
	cout << base1 << "^" << power1 << " = " << pow(base1, power1);
	return 0;
}
/*Output
Enter base number: 5
Enter power number: 8
5^8 = 390625
*/
