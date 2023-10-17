#include<iostream>
using namespace std;

class A   //BASE CLASS 
{
    int a; //pvt data cannot be inherited

    public:
        void seta(int x){
            a=x;
        }
        void showa(){
            cout<<a<<endl;
        }
};

class B : public A   //DERIVED CLASS
{ 

};

int main(){

    B b1; //obj of derived class

    b1.seta(100);        //we are calling BaseClass Methods through 
    b1.showa();          //the object of derived class, this is
                         //possible only bec. of inheritance
    


    return 0;
}