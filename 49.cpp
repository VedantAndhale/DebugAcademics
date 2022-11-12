/*49.C++ Programs To Create Pyramid and Pattern  .
Created By Vedant Andhale (@VedantAndhale)*/
// pyramid of pascal triangal
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
/*Output
*
* *
* * *
* * * * 
* * * * *
* * * * * *
*/
