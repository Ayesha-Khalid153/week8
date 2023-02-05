#include<iostream>
using namespace std;
main()
{
string  movie[5]={"gladiator","starWars","terminator","takingLives","tombRider"};
int ticketPrice= 500;
int totalPrice;
int discount;
string movieName;
cout <<"ENTER THE MOVIE NAME= ";
cin  >>movieName;
for(int idx=0; idx<5; idx++)
{
    if(movieName == movie[idx] )
    {
        if(idx%2 != 0)
        {
        discount = ticketPrice * 5 / 100;
        totalPrice = ticketPrice - discount;
        }
        else if(idx % 2 == 0)
        {
            discount = ticketPrice * 10 / 100;
            totalPrice = ticketPrice - discount;
        }   
    }
}
cout <<"YOUR TOTAL TICKET PRICE IS= "<<totalPrice;
}