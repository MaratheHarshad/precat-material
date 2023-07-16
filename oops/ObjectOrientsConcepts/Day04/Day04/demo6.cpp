// up casting and down casting
#include<iostream>
using namespace std;
class Base
{
    private:        // java /.net
        int a;  // private int a;
        int b;   //private int a;
    public:
        Base()
        {
            this->a=0;
            this->b=0;
            cout<<"inside parameterless ctor of Class Base"<<endl;
        }

        Base(int a, int b)
        {
            this->a=a;
            this->b=b;
            cout<<"inside parameterized ctor of Class Base"<<endl;
        }
        void print()
        {
            cout<<"inside base class"<<endl;
            cout<<"this->a="<<this->a<<"\t["<<&this->a<<"]"<<endl;
            cout<<"this->b="<<this->b<<"\t["<<&this->b<<"]"<<endl;
        }
        ~Base()
        {
            this->a=0;
            this->b=0;
            cout<<"inside dtor of Class Base"<<endl;
        }
};// end of base class

class Derived :public Base
{
    private:        // java /.net
        int c;  // private int c;
        
    public:
        Derived()
        {
            this->c=0;
            cout<<"inside parameterless ctor of Class Derived"<<endl;
        }

        Derived(int a, int b, int c):Base(a, b)
        {
            this->c=c;
            cout<<"inside parameterized ctor of Class Derived"<<endl;
        }
        void print()
        {
            Base::print();
            cout<<"inside Derived class"<<endl;
            cout<<"this->c="<<this->c<<"\t["<<&this->c<<"]"<<endl;
        }
        ~Derived()
        {
            this->c=0;
            cout<<"inside dtor of Class Derived"<<endl;
        }
};// end of Derived class

int main(void)
{
    Base * ptrBase1  = new Derived; // upcasting
    cout<<"ptrBase1"<<endl;
    ptrBase1->print(); // base class
    delete ptrBase1;
    ptrBase1=NULL;

    Base *ptrBase2=NULL;
    Derived obj1;
    ptrBase2=&obj1;  // upcasting


    //Derived *ptrDerived= new Base ; // down casting  //error

    Derived *ptrDerived2=NULL;
    Base objBase2;
    //ptrDerived2= &objBase2; // down casting //error


    return 0;
}