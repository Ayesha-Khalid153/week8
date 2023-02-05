#include<iostream>
using namespace std;
main()
{
    string elements[4];
   
    cout <<"ENTER THE ELEMENTS OF THE ARRAY= ";
    for(int idx= 0; idx<4; idx++)
    {
        cin >>elements[idx];
    }
    string element = elements[0];
    int count = 0;
    for(int idx= 0; idx<4; idx++)
    {
        
        if(element == elements[idx])
        {
            count++;
        }
    }
        if(count == 4)
        {
            cout <<"true";
        }
        else
        {
            cout <<"false";
        }
    
}