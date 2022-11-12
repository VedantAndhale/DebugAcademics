#include <iostream>
using namespace std;
class complex
{
public:
        int real, img;

        complex(int r = 0, int i = 0)
        {
                real = r;
                img = i;
        }
        void display()
        {
                cout << real << "+" << img << "i" << endl;
        }
        complex operator+(complex c)
        {
                complex temp;
                temp.real = real + c.real;
                temp.img = img + c.img;
                return temp;
        }
        complex operator*(complex c)
        {
                complex temp;
                temp.real = real * c.real - img * c.img;
                temp.img = real * c.img + img * c.real;
                return temp;
        }
};

istream &operator>>(istream &is, complex &obj)
{
        is >> obj.real;
        is >> obj.img;
        return is;
}
ostream &operator<<(ostream &outt, complex &obj)
{
        outt << "" << obj.real;
        outt << "+" << obj.img << "i";
        return outt;
}

int main()
{
        complex c1;
        cout << "Complex Number using Default Constructor "<<endl;
        c1.display();
        complex c2(4, 2);
        complex c3(5,3);
        cout << "Two Complex Number to Perform Arithmetic operations "<<endl;
        c2.display();
        c3.display();
        complex c4;
        c4 = c2 + c3;
        cout << "Addition of above Complex Numbers is ";
        c4.display();
        complex c5;
        c5 = c2 * c3;
        cout << "Multiplication of above Complex Numbers is ";
        c5.display();
        return 0;
}
