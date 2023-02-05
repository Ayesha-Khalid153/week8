#include <iostream>
using namespace std;
main()
{
    int scalarProduct = 1;
    int size;
    int number;
    int scalar;
    cout << "ENTER THE SIZE : ";
    cin >> size;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "ENTER THE ELEMENT : ";
        cin >> array[idx];
    }
    cout << "Enter value of Scalar : ";
    cin >> scalar;
    for (int idx = 0; idx < size; idx++)
    {
        cout << scalar * array[idx] << endl;
    }
}