/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class B;

class A
{
    int x;
    public:
     void setdata(int a)
     {
         x=a;
     }
     
     friend void max(A,B);
};

class B{
    int y;
    public:
    
    void setdata(int b)
    {
        y=b;
    }
    
    friend void max(A,B);
};

void max(A aa,B bb)
{
  if(aa.x>bb.y)
  {
      cout<<"max is :"<<aa.x<<endl;
  }
  else
  {
      cout<<"max is :"<<bb.y<<endl; 
      
  }
};

int main()
{
    cout<<"enter no:";
    int a,b;
    cin>>a>>b;
     A aa;
     B bb;
     
     aa.setdata(a);
     bb.setdata(b);
     max(aa,bb);
    return 0;
}