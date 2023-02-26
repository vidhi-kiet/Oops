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
     A(int x)
     {
         a=x;
     }
      void display()
      {
          cout<<"\nclass A:="<<a<<endl;
      }
};
class B
{
    protected:
    int b;
    public:
    B(int y)
    {
        b=y;
    }
    void put()
    {
        cout<<"class B :"<<b<<endl;
    }
    
};
class C:public A,public B
{
    int c;
    public:
    C(int p,int q,int r):A(p),B(q)
    {
        c=r;
    }
    void show()
    {
        cout<<"class B:"<<c<<endl;
    }
};

int main()
{
    cout<<"enter no.:";
  int n,m,l;
  cin>>n>>m>>l;
  
  C cc(n,m,l);
  cc.display();
  cc.put();
  cc.show();
  
    return 0;
}