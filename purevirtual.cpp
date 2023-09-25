// pure virtual function
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show() = 0;
};

class derived1 : public base
{
    public:
    void show()
    {
        cout<<"derived 1 class show function called..."<<endl;
    }
};

class derived2 : public base
{
    public:
    void show()
    {
        cout<<"derived 2 class show function called..."<<endl;
    }
};

int main()
{
    base *p;
    derived1 d;
    derived2 d2;

    p=&d2;
    p->show();

    p=&d;
    p->show();
}