//Heirarchial inheritance
# include<iostream>
# include<conio.h>
using namespace std;

class A // Base Class 
{    
    public: 
        int x;   
        A()  //def constructor
        {
            cout<<"In class A\n";
            x=100;
        }
};
class B: public A // B is inheriting from A
{
    int y,z;
    public:
    B()
    {
        cout<<"In class B\n";
        y=20;
    }
    void mul()
    {
        z=x*y;
    }
    void disp_xyz()
    {
        cout<<"\n\nB Class --> \n";
        cout<<"\n x = "<<x;
        cout<<"\n y = "<<y;
        cout<<"\n z = "<<z;
    }
};
class C: public A // C is inheriting from A
{
    int y,z;
    public:
    C()
    {
        cout<<"In class c\n";
        y=20;
    }
    void div()
    {
        z=x/y;
    }
    void disp_xyz()
    {
        cout<<"\n\nC Class --> \n";
        cout<<"\n x = "<<x;
        cout<<"\n y = "<<y;
        cout<<"\n z = "<<z; 
   }
};
int  main()
{
    B b1; //b1 is the ob of derived class B
    b1.mul();
    b1.disp_xyz();

    C c1;   //c1 is the ob of derived class C
    c1.div();
    c1.disp_xyz();

    getch();
    return 0;
}