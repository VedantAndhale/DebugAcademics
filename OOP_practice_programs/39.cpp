/*39.C++ Program to Find GCD  .
Created By Vedant Andhale (@VedantAndhale)*/

#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
   int a = 7, b = 5;
   cout<<"LCM of "<< a <<" and "<< b <<" is "<< (a*b)/gcd(a, b);
   return 0;
}
/*Output
LCM of 7 and 5 is 35
*/