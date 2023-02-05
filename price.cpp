#include<iostream>
using namespace std;
main()
{
    string fruit[5] = {"peach", "apple", "guava", "watermelon"};
    int price[5]= {60, 70, 40, 30};
    string fruitName;
    int total;
    int quantity;
    cout <<"ENTER THE FRUIT NAME= ";
    cin  >>fruitName;
    cout <<"ENTER THE QUANTITY OF THE FRUIT IN KGs= ";
    cin  >>quantity;
    for(int idx=0; idx<5; idx++)
    {
      if(fruitName== fruit[idx])
      {
        total = price[idx] * quantity;
        break;
      }
    }
    cout <<"TOTAL BILL IS= "<<total;
}