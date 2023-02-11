/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class odev
{
    private:
    int n;
    public:
    
    void getdata()
    {
        cout<<"enter no.:";
        cin>>n;
        
    }
    void putdata()
    {
        if(n%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
};

int main()
{
   odev s1;
   s1.getdata();
   s1.putdata();
    return 0;
}