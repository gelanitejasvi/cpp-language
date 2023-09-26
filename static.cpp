//static variable
#include<iostream>
using namespace std;
class Test
{
    int carrating;
    public:
    static int num;      //declare
    void setrating()
    {
        cout<<"enter car rating:";
        cin>>carrating;
        num++;
    }
    void display()
    {
        cout<<"your rating is:"<<carrating<<endl;
    }
};

int Test :: num=15;
int main()
{
    cout<<"starting stage:"<<Test::num<<endl;
    Test t1,t2,t3;
    t1.setrating();
    t1.display();
    t2.setrating();
    t2.display();
    cout<<"ending stage: "<<Test::num<<endl;
}