/*1. C++ Program to Check Prime Number by Creating a Function.
Created By Vedant Andhale (@VedantAndhale)*/

#include<iostream>
using namespace std;
int checkPrime(int num)
{
    int i, check=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            check++;
            return check;
        }
    }
    return check;
}

int main()
{
    int num, check;
    cout<<"Enter a Number: ";
    cin>>num;
    check = checkPrime(num);
    if(check==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
    cout<<endl;
    return 0;
}

/*Output
Enter a Number: 47
It is a Prime Number
Enter a Number: 10
It is a not Prime Number
*/