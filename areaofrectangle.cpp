/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class area
{
    private:
    int a,b,c;
    
    public:
     
    area(int x,int y,int z)
    {
        cout<<"constructor:";
        a=x;
        b=y;
        c=z;
        
    }
    void cal()
    {
        int area=a*b*c;
        cout<<"\narea :"<<area<<endl;
    }
};


int main()
{
   area s1(3,2,1);
   s1.cal();
    return 0;
}