#include <iostream>
using namespace std;
main()
{
    char letter;
    string word;
    cout << "ENTER THE LETTER= ";
    cin >> letter;
    cout << "ENTER THE WORD= ";
    cin >> word;
    // getline(cin, word);
    int count = 0;
    while (word[count] == 'a' || word[count] == 'e' || word[count] == 'i' || word[count] == 'o' || word[count] == 'u')
    {
        count++;
    }
    cout << "number of vowels= " << count;
}