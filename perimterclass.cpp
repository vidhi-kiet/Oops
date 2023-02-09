/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class triangle 
{
    public:
     void print_p(int a,int b,int c)
     {
         double s=(a+b+c)/2.0;
         cout<<"perimeter is :"<<s<<endl;
     }
    
};



int main()
{
    triangle t;
    t.print_p(3,4,5);
    

    return 0;
}