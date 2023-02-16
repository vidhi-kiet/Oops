/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class demo
{
    int x,y;
    static int z;
    public:
    
    void getdata()
    {
       cout<<"\nEnter no.: ";
       cin>>x>>y;
       z++;
        
    }
    
    void putdata()
    {
        cout<<"\nx = "<<x<<"\ny = "<<y;
        cout<<"\nstatic z = "<<z;
    }
    static void abc()
    {
        cout<<"\nstatic variable :"<<z;
    }
};

int demo ::z;
 


int main()
{
 demo aa,bb;
 aa.getdata();
 bb.getdata();
 aa.putdata();
 bb.putdata();
 
 demo::abc();
    return 0;
}