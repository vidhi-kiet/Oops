/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A 
{
    protected:
    int a;
    public:
    
    void geta(int x)
    {
        a=x;
    }
};

class B
{
    protected:
    int b;
    public:
    
    void getb(int y)
    {
       b=y;
    }
};

class C:public A,public B
{
    public:
    void display()
    {
        cout<<"value of a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
        cout<<"addirtion of a & b :"<<a+b<<endl;
    }
};

int main()
{
    int x,y;
    cout<<"enter no.:";
    cin>>x>>y;
    C aa;
    aa.geta(x);
    aa.getb(y);
    aa.display();
    return 0;
}