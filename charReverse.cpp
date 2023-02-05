#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "ENTER A WORD= ";
    getline(cin, word);
    int count = 0;
    while (word[count] != '\0')
    {
        count++;
    }
    cout << "THE LENGTH IS= " << count << endl;
    for (int idx = count; idx >= 0; idx--)
    {
        cout << word[idx];
    }
}
