#include <iostream>
using namespace std; 
main()
{
    int size;
    int iterations;
    cout << "ENTER THE ARRAY OF NUMBERS= ";
    cin >> size;
    int element[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "ENTER THE ELEMENTS OF THE ARRAY= ";
        cin >> element[idx];
    }
    cout <<"how many iterations you want= ";
    cin  >>iterations;
    {
        for (int id = 0; id < iterations ; id++)
        {
            for(int idy=0; idy < size; idy++)
            {
            if (element[idy] % 2 == 0)
            {
            element[idy]= element[idy] - 2;
            cout <<element[idy]<<" ";
            }
            if (element[idy] % 2 != 0)
            {
            element[idy] = element[idy] + 2;
            cout <<element[idy]<<" ";
            }
            }
        }
    }
}