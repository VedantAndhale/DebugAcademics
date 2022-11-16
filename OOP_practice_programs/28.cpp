/*28.Increment ++ and Decrement -- Operator Overloading in C++ Programming  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    // function to get number
    void getNum(int x)
    {
        n = x;
    }
    // function to display number
    void dispNum(void)
    {
        cout << "value of n is: " << n;
    }
    // unary ++ operator overloading
    void operator++(void)
    {
        n = ++n;
    }
    // unary -- operator overloading
    void operator--(void)
    {
        n = --n;
    }
};

int main()
{
    NUM num;
    num.getNum(10);

    ++num;
    cout << "After increment - ";
    num.dispNum();
    cout << endl;

    --num;
    cout << "After decrement - ";
    num.dispNum();
    cout << endl;

    return 0;
}

/**
 Output
  After increment - value of n is: 11
  After decrement - value of n is: 10
*/