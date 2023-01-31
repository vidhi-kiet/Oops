#include <iostream>

using namespace std;
class addition{
    private:
    int n1,n2,result;

    public :
    void read()
    {
        cout<<"enter first no.:";
        cin>>n1;
        cout<<"enter second no.:";
        cin>>n2;
        }
        void sum()
        {
            result=n1+n2;

        }
        void print()
        {
            cout<<"result is"<<" "<<n1<<" + "<<n2<<" = "<<result<<endl;
        }
        
};

int main()
{
    addition s1,s2;
     cout<<"first sum:"<<endl;
     s1.read();
     s1.sum();
     s1.print();

     cout<<"second sum :"<<endl;
     s2.read();
     s2.sum();
     s2.print();
    

    return 0;
}