/*33.C++ Program to Find All Roots of a Quadratic Equation  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a1, b1, c1, x1, y1, discriminant1, real_Part1, imaginary_Part1;
    cout << "Enter coefficients  a, b and c: ";
    cin >> a1 >> b1 >> c1;
    discriminant1 = b1 * b1 - 4 * a1 * c1;

    if (discriminant1 > 0)
    {
        x1 = (-b1 + sqrt(discriminant1)) / (2 * a1);
        y1 = (-b1 - sqrt(discriminant1)) / (2 * a1);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "y1 = " << y1 << endl;
    }

    else if (discriminant1 == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b1 / (2 * a1);
        cout << "x1 = y1 =" << x1 << endl;
    }

    else
    {
        real_Part1 = -b1 / (2 * a1);
        imaginary_Part1 = sqrt(-discriminant1) / (2 * a1);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << real_Part1 << "+" << imaginary_Part1 << "i" << endl;
        cout << "y1 = " << real_Part1 << "-" << imaginary_Part1 << "i" << endl;
    }

    return 0;
}
/*Output
Enter coefficients  a, b and c: 2 5 3
Roots are real and different.
x1 = -1
y1 = -1.5
*/
