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
      void input()
      {
          cout<<"enter value:";
          cin>>a;
      }
      void display()
      {
          cout<<"\nclass A:"<<a<<endl;
      }
};
class B
{
    protected:
    int b;
    public:
    void input()
      {
          cout<<"enter value:";
          cin>>b;
      }
    
    void put()
    {
        cout<<"class B:"<<b<<endl;
    }
    
};
class C:public A,public B
{
    int c;
    public:
    void input()
      {
          cout<<"enter value:";
          cin>>c;
          A::input();
         B::input();

      }
      
    void show()
    {
        cout<<"class C:"<<c<<endl;
    }
};

int main()
{
    C cc;
    cc.input();
    cc.display();
  cc.put();
  cc.show();
  
    return 0;
}