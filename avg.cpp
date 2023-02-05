#include <iostream>
using namespace std;
main()
{
    int arr[5];
    int sum = 0;
    int average;
    for (int idx = 0; idx < 5; idx++)
    {
        cout << "ENTER THE ELEMENT= ";
        cin >> arr[idx];
        sum = sum + arr[idx];
        average = arr[idx] / sum;
    }
    cout << "THE SUM IS = " << sum <<endl;
    cout <<"THE AVERAGE IS= "<<average;
    
}