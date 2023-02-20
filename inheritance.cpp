/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class account
{
    public:
    float salary=60000;
    
};

class programmer:public account
{
    public:
    float bonus=5000;
};

int main()
{
 
 programmer p1;
 cout<<p1.salary<<endl;
 cout<<p1.bonus<<endl;
    return 0;
}