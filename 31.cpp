/*31.C++ Program to check Whether a character is Vowel or Consonant.  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

int main()
{
    char ch1;
    bool LowerVowel, UpperVowel;

    cout << "Enter an alphabet: ";
    cin >> ch1;

    LowerVowel = (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u');

    UpperVowel = (ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U');

    if (!isalpha(ch1))
        cout << "Error! Non-alphabeticharacter." << !isalpha(ch1);
    else if (LowerVowel || UpperVowel)
        cout << ch1 << " is a vowel.";
    else
        cout << ch1 << " is a consonant.";

    return 0;
}
/*Output
Enter an alphabet: k
k is a consonant.
*/
