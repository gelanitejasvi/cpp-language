//static method 
#include<iostream>
using namespace std;
class test
{
    int carrating;
    public:
    static int num;   //declare
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
    static int number()
    {
        return num;
    }
};

int test :: num=15;
int main()
{
    cout<<"starting stage:"<<test ::number()<<endl;
    test t1,t2,t3;
    t1.setrating();
    t1.display();
    t2.setrating();
    t2.display();
    cout<<"ending stage:"<<test ::number()<<endl;    
}
