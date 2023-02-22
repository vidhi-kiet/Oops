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

  void input ()
  {
    cout << "input data a :";
    cin >> a;
  }
};
class B
{
protected:
  int b;
public:

  void getd ()
  {
    cout << "input b:";
    cin >> b;
  }
};

class C:public A, public B
{
public:
  void display ()
  {
    cout << "add :";
    cout << a + b;

  }
};


int
main ()
{
  C aa;
  aa.input ();
  aa.getd ();
  aa.display ();
}
