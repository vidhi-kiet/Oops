/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class factorial 
{
    private:
    int n,fact;
    
    public:
     void enter()
     {
         cout<<"enter no.:";
         cin>>n;
         
     }
     
     void factf()
     {
         fact=1;
         for(int i=1;i<=n;i++)
         {
             fact=fact*i;
         }
         
         cout<<"factorial is :"<<fact<<endl;
     }
    
};



int main()
{
    factorial f;
    f.enter();
    f.factf();
    

    return 0;
}