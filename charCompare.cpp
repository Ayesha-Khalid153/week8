#include <iostream>
using namespace std;
main()
{
    char letter;
    string word;
    cout << "ENTER THE WORD= ";
    getline(cin, word);
    cout << "ENTER THE LETTER= ";
    cin >> letter;
    int count = 0;
    while (word[count] != '\0')
    {
        count++;
    }
    if (word[count - 1] == letter)
    {
        cout << "THE LAST LETTER IS SAME AS " << letter;
    }
    else
    {
        cout << "THE LAST LETTER IS not SAME AS " << letter;
    }
}