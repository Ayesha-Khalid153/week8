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
    int number;
    cout << "ENTER THE NUMBeR= ";
    cin >> number;
    int scalarproduct = 1;
    scalarproduct = scalarproduct * number * array[number];
    cout << "YOUR SCALAR PRODUCT IS= " << scalarproduct;
}