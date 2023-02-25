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
    public:
    void display()
    {
        cout<<"\n in class A";
    }
};

class B :public A
{
    public:
    void putd()
    {
        cout<<"\n in class B";
    }
};

class C
{
    public:
    void putdata()
    {
        cout<<"\n class C";
    }
};

class D:public B,public C
{
    public:
    void msg()
    {
        cout<<"\n class D";
    }
    
    
};

int main()
{
  D dd;
  dd.display();
  dd.putd();
  dd.putdata();
  dd.msg();
    return 0;
}