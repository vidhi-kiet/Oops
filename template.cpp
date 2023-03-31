/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


template <class x> x big(x a ,x b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
  cout<<big(4,5)<<endl;
  cout<<big(4.5,7.5)<<endl;
  
    return 0;
}