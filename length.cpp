#include<iostream>
using namespace std;
main()
{
    string word;
    cout <<"ENTER THE WORD= ";
    cin  >>word;
    int length= word.length();
    
    if(length % 2 == 0)
    {
        cout << "true";
    }
    else if(length % 2 != 0)
    {
        cout  << "false";
    }
}