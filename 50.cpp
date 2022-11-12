/*50.C++ Program to Make a Simple Calculator to Add, Subtract, Mul tiply or Divide Using switch...case  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch (op)
  {

  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;

  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;

  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;

  default:
    // If the operator is other than +, -, * or /, error message is shown
    cout << "Error! invalid operator";
    break;
  }

  return 0;
}
/*Output
Enter operator: +, -, *, /: +
Enter two operands: 2
5
2 + 5 = 7
*/
