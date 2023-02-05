#include <iostream>
using namespace std;
main()
{
    int size;
    int arr1[2];
    for(int idx=0; idx<2; idx++)
    {
        cout <<"ENTER THE ELEMENTS OF 1ST ARRAY= ";
        cin  >>arr1[idx];
    }
    
    cout <<"ENTER THE SIZE OF SECOND ARRAY= ";
    cin  >>size;
    int arr2[size];
    for(int jdx=0 ;jdx<size; jdx++)
    {
        cout <<"ENTER THE ELEMENTS OF 2nd ARRAY= ";
        cin  >>arr2[jdx];
    }
    int arr3[size+2];
     arr3[0] = arr1[0];
    for(int kdx=0; kdx<(size+2); kdx++)
    {
       
        for(int i=0; i<size; i++)
        {
            arr3[i+1] = arr2[i]; 
        }
    }
        arr3[size+1] = arr1[1];
        for(int x=0; x<size+2; x++){
          cout <<arr3[x]<<" ";
        }
}