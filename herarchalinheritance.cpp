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
class C:public A
{
    public:
    void putdata()
    {
        cout<<"\n class C";
    }
};
int main()
{
  B bb;
  bb.putd();
  bb.display();
  C cc;
  cc.putdata();
  cc.display();
    return 0;
}