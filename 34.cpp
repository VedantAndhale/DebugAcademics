/*34.C++ Program to C alculate Sum of Natural Numbers  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout << "Enter the Nth Natural Number : ";
	cin >> num1;
	cout << "Sum of natural number till " << num1 << " is " << (num1 * (num1 + 1)) / 2;
	return 0;
}
/*Output
Enter the Nth Natural Number : 4
Sum of natural number till 4i s 10
*/
