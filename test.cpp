#include<iostream>
using namespace std;
class test
{
    int testcode;
    char description[30];
    int Nocandidate;
    float centerreqd;
    int calcntr()
        {
       return Nocandidate/100+1;
        
    }

    public:
    void schedule()
    {
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter Nocandidate:";
        cin>>Nocandidate;

        centerreqd=calcntr();
    }

    void disptest()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"candidate:"<<Nocandidate<<endl;
        cout<<"centerreqd:"<<centerreqd<<endl;
       
    }
};

int main()
{
    test c;
    c.schedule();
    c.disptest();   
}