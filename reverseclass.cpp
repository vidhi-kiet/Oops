/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class reverse
{
    int x;
    public:
     reverse(int n)
     {
         cout<<"\nconstructor:";
         x=n;
     }
     
     void putdata()
     {
         int rev=0;
         while(x>0)
         {
         rev=rev*10+(x%10);
         x=x/10;
         }
         cout<<"\nreverse of no."<<rev<<endl;
     }
    
};

int main()
{
    cout<<"enter no.:";
    int n;
    cin>>n;
   reverse s1(n);
   s1.putdata();
    return 0;
}