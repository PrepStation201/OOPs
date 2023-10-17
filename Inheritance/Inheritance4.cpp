//Multiple  inh
# include<iostream>
# include<conio.h>
using namespace std;

class M // Base Class 
{    
    public: 
        int m;   
        void setm(int x){
            m=x;
        }
};
class N // Base Class 
{    
    public: 
        int n;   
        void setn(int x){
            n=x;
        }
};
class P: public M,public N 
{
    public:

    void disp()
    {
        cout<<"\n\nP Class --> \n";
        cout<<"\n M = "<<m;
        cout<<"\n N = "<<n;
        cout<<"\n M*N = "<<m*n; 
   }
};
int  main()
{
    P p1; //p1 is the ob of derived class \P
    
    p1.setm(10);
    p1.setn(20);

    p1.disp();

    getch();
    return 0;
}