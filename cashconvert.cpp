#include<iostream>
using namespace std;
int main()
{
    int cash;
    cout<<"enter rupees:";
    cin>>cash;

    cout<<"\n 2000 X"<<cash/2000;
    cash=cash%2000;

    cout<<"\n 500 X"<<cash/500;
    cash=cash%500;

    cout<<"\n 200 X"<<cash/200;
    cash=cash%200;

    cout<<"\n 100 X"<<cash/100;
    cash=cash%100;

    cout<<"\n 50 X"<<cash/50;
    cash=cash%50;

    cout<<"\n 20 X"<<cash/20;
    cash=cash%50;

    cout<<"\n 10 X"<<cash/10;
    cash=cash%10;

    cout<<"\n 5 X"<<cash/5;
    cash=cash%5;

    cout<<"\n 2 X"<<cash/2;
    cash=cash%2;

    cout<<"\n 1 X"<<cash/1;
    cash=cash%1;
}
