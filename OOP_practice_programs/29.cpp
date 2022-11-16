/*29.C++ Program to Subtract Complex Number Using Operator Overloading  .
Created By Vedant Andhale (@VedantAndhale)*/

#include<iostream>
using namespace std;
class ComplexNum {
   private:
   int real, imag;
   public:
   ComplexNum(int r = 0, int i =0) {
      real = r;
      imag = i;
   }
   ComplexNum operator - (ComplexNum obj1) {
      ComplexNum obj2;
      obj2.real = real - obj1.real;
      obj2.imag = imag - obj1.imag;
      return obj2;
   }
   void display() {
      cout << real << " + " << imag<<"i" <<endl;
   }
};
int main() {
   ComplexNum comp1(15, 10), comp2(5, 2);
   cout<<"The two comple numbers are:"<<endl;
   comp1.display();
   comp2.display();
   cout<<"The result of the subtraction is: ";
   ComplexNum comp3 = comp1 - comp2;
   comp3.display();
   return 0;
}
/*
Output
The two comple numbers are:
15 + 10i
5 + 2i
The result of the subtraction is: 10 + 8i
*/