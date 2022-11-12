/*27.C++ Program to Sort Elements in Lexicographical Order (Dictionary Order)  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    for (int i = 0; i < 10; ++i)
    {
        getline(cin, str[i]);
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9 - i; ++j)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "\nIn lexicographical order: " << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << str[i] << endl;
    }
    return 0;
}

/*Output
Enter words(limited for 10 only):
ved
arayan
yash
rushi
aditya
raj
pranav
kshitij
avinash
sarthak

In lexicographical order:
aditya
arayan
avinash
kshitij
pranav
raj
rushi
sarthak
ved
yash

*/
