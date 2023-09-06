#include<iostream>
using namespace std;
class report
{
    int adno;
    char name[20];
    float arr[5];
    float  average;
    float getavg()
    {
        float total=0;
        cout<<"enter marks in:";
        for(int i=0; i<5; i++)
        {
            cin>>arr[i];
            total+=arr[i];
        }
        
    }
}