#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "ENTER A WORD= ";
    getline(cin, word);
    int idx = 0;
    while (word[idx] != '\0')
    {
        cout << "THE CHARACTER AT INDEX " << idx << " IS = " << word[idx] << endl;
        idx++;
    }
}
