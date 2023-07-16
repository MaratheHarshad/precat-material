// object slicing
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
int main()
{
    Base obj1; // paramaterless
    cout<<"obj1="<<endl;
    obj1.print(); //a=0 b=0                    // a b 
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 4+4=8 bytes

    Derived obj2(50, 60,70);
    obj2.print(); //a=50 b=60  c=70            // a b c
    cout<<"size of obj2="<<sizeof(obj2)<<endl; // 4+4+4=12 bytes
//   2     3      ingore c
    obj1= obj2; // object slicing
    obj1.print(); //a=50 b=60                    // a b 
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 4+4=8 bytes

//   3    2
    //obj2=obj1;  // error
    return 0;
}
