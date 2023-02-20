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
  int x;
public:
  void input ()
  {
    cout << "enter data:";
    cin >> x;

  }
};

class B:public A
{
    private:
    int y;
    public:
    void getdata()
    {
    cout<<"enter no 2:";
    cin>>y;
    }
    
    void putdata()
    {
        cout<<"addition :"<<x+y<<endl;
    }
    
};
int main ()
{
  B aa;
  aa.input();
  aa.getdata();
  aa.putdata();
  return 0;
}
