/*11.C++ Program to Calculate Power Using Recursion  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream> 
using namespace std; 
int FindPower(int base, int power) {
   if (power == 0)
      return 1;
   else
      return (base * FindPower(base, power-1));
}  
int main() {
   int base , power;cout << "Base : ";
   cin >> base;
   cout << "power : ";
   cin >> power;

   cout << base << " raised to the power " << power << " is " << FindPower(base, power);
   return 0;
}

/*Output
Base : 3
power : 5
3 raised to the power 5 is 243
*/