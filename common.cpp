#include <iostream>
using namespace std;
main()
{
    int count=0;
    string arr1[5];
    string arr2[5];
    string arr3[5];
    cout <<"ENTER THE ELEMENTS OF 1ST ARRAY= ";
    for(int idx=0; idx<5; idx++)
    {  
        cin  >>arr1[idx];
    }
    cout <<"ENTER THE ELEMENTS OF 2nd ARRAY= ";
    for(int jdx=0 ;jdx<5; jdx++)
    {
        cin  >>arr2[jdx];
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                for(int x=0; x<5; x++)
                {
                    if(arr1[i]==arr3[x])
                    {
                    count++;
                    }
                }
                if(count == 0)
                {
                    arr3[k]=arr1[i];
                    k++;
                }
            }
        }
    }
    cout <<"COMMON ELEMENTS ARE= ";
    for(int i=0; i<5; i++)
    {
        cout <<arr3[i]<<" ";
    }
     cout <<endl;
}