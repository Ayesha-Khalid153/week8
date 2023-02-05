#include <iostream>
using namespace std;
main()
{
    int arr[5];
    int sum = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        cout << "ENTER THE ELEMENT= ";
        cin >> arr[idx];
        sum = sum + arr[idx];
    }
    cout << "THE SUM IS = " << sum;
}