#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "ENTER THE NUMBeR= ";
    cin >> size;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "ENTER THE ELEMENT= ";
        cin >> array[idx];
    }
    for (int idx = size; idx >= 0; idx--)
    {
        cout << array[idx];
    }
}