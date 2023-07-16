// demo of constant data member , constant member function and constant object
#include<iostream>
using namespace std;
namespace NConstDemo
{
    class ConstDemo
    {
        // variable / data member / field
        private:
           // non constant data  member
            mutable int a;
            int b;
            //constant data  member
            const int c; 
            int const d;
        public:
          // ctor init list
            //ConstDemo(ConstDemo * const this):a(10), b(20), c(30), d(40)
            ConstDemo():a(10), b(20), c(30), d(40)
            {
                //this->a=10;
                //this->b=20; // allowed for a, b as they are non constant data  member
                //this->c=30;
                //this->d=40; // not allowed for a, b as they are constant data  member
            }
            //ConstDemo(ConstDemo * const this,int a, int b, int c, int d):a(a), b(b), c(c), d(d)
            ConstDemo(int a, int b, int c, int d):a(a), b(b), c(c), d(d)
            {
                //this->a=a;
                //this->b=b; // allowed for a, b as they are non constant data  member
                //this->c=c;
                //this->d=d; // not allowed for a, b as they are constant data  member
            }
            // we can  modify state of the object in non constant memebr function
            //void print(ConstDemo * const this)
            void print()
            {
                //this->a=99;  // allowed a ,b  are non constant data member
                //this->b=99;  //
                //this->c=99;  // c, d error as they are constant data member
                //this->d=99;  //
                
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;
                cout<<"this->c="<<this->c<<endl;
                cout<<"this->d="<<this->d<<endl;
            }
            //return_type function_name() const
            // we can not modify state of the object in constant memebr function
            //void display(const ConstDemo * const this)const
            void display()const
            {
                  this->a=99;  // allowed a is mutable
                 // this->b=99;  //not allowed b is not mutable
                //this->c=99;  // c, d error as they are constant data member
                //this->d=99;  //
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;
                cout<<"this->c="<<this->c<<endl;
                cout<<"this->d="<<this->d<<endl;
            }
            //~ConstDemo(ConstDemo * const this)
            ~ConstDemo()
            {
                //this->a=0;
                //this->b=o; // allowed for a, b as they are non constant data  member
                //this->c=0;
                //this->d=0; // not allowed for a, b as they are constant data  member
            }
    };// end of class ConstDemo
}// end of namespace NConstDemo
using namespace NConstDemo;
int main(void)
{
    // non constant object
    // non constant object can call both constant member fun and non constant  member fun
     
    ConstDemo c1;
    cout<<"c1=dispaly()"<<endl;
    c1.display();

    cout<<"c1=print()"<<endl;
    c1.print();
    cout<<"size of c1="<<sizeof(c1)<<endl; // 4*4= 16 bytes

    // constant object
    // constant object can call only constant  member function
    // constant object can not call non constant  constant  member function
    
    const ConstDemo c2;
    cout<<"c2=dispaly()"<<endl;
    c2.display();

    cout<<"c2=print()"<<endl;
    //c2.print();
    cout<<"size of c2="<<sizeof(c2)<<endl; // 4*4= 16 bytes
    
    return 0;
}

// when we declare data member as constant it is compulsory to initialize that
// data member inside constructor initialiser list

// short hand opeartor a+=10;     a=a+10;

//If you want to modify state of the object inside constant
//member function at that time declared data member as a mutable.
