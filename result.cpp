#include<iostream>
using namespace std;
class student
{
    int adminNo;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+maths+sci;
    }

    public:
    void takedata()
    {
        cout<<"enter adminNo:";
        cin>>adminNo;
        cout<<"enter student name:";
        cin>>sname;
        cout<<"enter english name:";
        cin>>eng;
        cout<<"enter maths name:";
        cin>>maths;
        cout<<"enter science name:";
        cin>>sci;
       total=ctotal();
    }

    void showdata()
    {
        cout<<"adminNo:"<<adminNo<<endl;
        cout<<"student name:"<<sname<<endl;
        cout<<"english marks:"<<eng<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"science marks:"<<sci<<endl;
        cout<<"total marks:"<<total<<endl;
    }
};
int main(){
    student s;
    s.takedata();
    s.showdata();
    
}