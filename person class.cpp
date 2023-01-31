#include <iostream>

using namespace std;
class person
{
    public:
     string name;
     int number;

};

int main()
{
    person p;
    cout<<"enter name of person :";
    cin>>p.name;
    cout<<"Enter no. of person :";
    cin>>p.number;
    cout<<p.name<<" "<<p.number<<endl;

    return 0;
}