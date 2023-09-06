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
        return total/5;        
    }
    public:
    void readinfo()
    {
        cout<<"admin no:";
        cin>>adno;
        cout<<"student name:";
        cin>>name;
        average=getavg();
    }

    void displayinfo()
    {
        cout<<"admin no:"<<adno<<endl;
        cout<<"student name:"<<name<<endl;
        cout<<"marks are:"<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
        cout<<"average:"<<average<<endl;\

    }
};

int main()
{
    report c;
    c.readinfo();
    c.displayinfo();
}