//Modified single inheritance program
#include<iostream>
using namespace std;

class A   //BASE CLASS 
{
    int a; //pvt data cannot be inherited

    public:
        int b;
        void setab(int x,int y){
            b=y;
            a=x;
        }
        void showab(){
            cout<<a<<endl;
            cout<<b<<endl;
        }
};

class B : public A   //DERIVED CLASS
{ 
    int d;
    
    public:
    void setd(int m){
        d=m;
    }
    void showd(){
        cout<<d<<endl;
    }

};

int main(){

    B b1; //obj of derived class

    b1.setab(100,200);        //we are calling BaseClass Methods through 
    b1.showab();          //the object of derived class, this is
                         //possible only bec. of inheritance
    
    //b1.a=100 not possible
    //b1.d=1000; not accesible

    b1.b=2000;
    b1.showab();

    b1.setd(10);
    b1.showd();

    
    return 0;
}