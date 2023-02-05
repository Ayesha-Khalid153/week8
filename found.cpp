#include <iostream>
using namespace std;
main()
{
    int number;
    int size;
    cout << "ENTER THE NUMBeR= ";
    cin >> size;
    bool flag = false;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "ENTER THE ELEMENT= ";
        cin >> array[idx];
    }
    cout << "ENTER THE NUMBER= ";
    cin >> number;
    for (int idx = 0; idx < size; idx++)
    {
        if (array[idx] == number)
        {
            flag = true;
            break;
        }
        if (flag == true)
        {
            cout << "the value exists..";
        }
        else
        {
            cout << "doesnt exist..";
        }
    }
}