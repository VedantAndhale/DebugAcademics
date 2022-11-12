/*22.C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    string str1;
    int vowel, consonant, digit, space;

    vowel = consonant = digit = space = 0;

    cout << "Enter Long string: ";
    getline(cin, str1);

    for (int i = 0; i < str1.length(); ++i)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' ||
            str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
        {
            ++vowel;
        }
        else if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z'))
        {
            ++consonant;
        }
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            ++digit;
        }
        else if (str1[i] == ' ')
        {
            ++space;
        }
    }

    cout << "Number of Vowels: " << vowel << endl;
    cout << "Number of Consonants: " << consonant << endl;
    cout << "Number of Digits: " << digit << endl;
    cout << "Number of White spaces: " << space << endl;

    return 0;
}
/*Output
Enter Long string: Vedant fgf^[[A vfd
Number of Vowels: 3
Number of Consonants: 10
Number of Digits: 0
Number of White spaces: 2

*/
