#include <iostream>
using namespace std;
main()
{
    int number;
    cout << "ENTER THE NUMBER= ";
    cin >> number;
    float arr[number];
    float sum = 0;
    for (int idx = 0; idx < number; idx++)
    {
        cout << "ENTER THE RESISTERS ";
        cin >> arr[idx];
        sum = sum + arr[idx];
    }
    cout << "THE SUM IS = " << sum << endl;
}