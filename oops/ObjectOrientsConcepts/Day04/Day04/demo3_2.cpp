// diamond problem sol no2(virtual inheritance) private data mmeber (best)


#pragma pack(1)
#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        A()
        {
            this->a=10;
            cout<<"inside parameterless ctor of Class A"<<endl;
        }
        A(int a)
        {
            this->a=a;
            cout<<"inside parameterized ctor of Class A"<<endl;
        }
        void print()
        {
            cout<<"inside class A"<<endl;
            cout<<"this->a="<<this->a<<"\t ["<<&this->a<<"]"<<endl;
        }
        ~A()
        {
            this->a=0;
            cout<<"inside dtor of Class A"<<endl;
        }

};// end of class A

class B: virtual public A
{
   private: 
        int b;
   public:
        B()
        {
            this->b=20;
            cout<<"inside parameterless ctor of Class B"<<endl;
        }
        B(int a, int b):A(a)
        {
            this->b=b;
            cout<<"inside parameterized ctor of Class B"<<endl;
        }
        void print()
        {
            A::print();   
            cout<<"inside class B"<<endl;
            cout<<"this->b="<<this->b<<"\t ["<<&this->b<<"]"<<endl;
        }
        void printOnlyB()
        {
            cout<<"inside class B"<<endl;
            cout<<"this->b="<<this->b<<"\t ["<<&this->b<<"]"<<endl;
        }
        ~B()
        {
            this->b=0;
            cout<<"inside dtor of Class B"<<endl;
        }

};// end of class B

class C: virtual public A
{
    private:
        int c;
    public:
        C()
        {
            this->c=30;
            cout<<"inside parameterless ctor of Class C"<<endl;
        }
        C(int a, int c):A(a)
        {
            this->c=c;
            cout<<"inside parameterized ctor of Class C"<<endl;
        }
        void print()
        {
            A::print();
            cout<<"inside class C"<<endl;
            cout<<"this->c="<<this->c<<"\t ["<<&this->c<<"]"<<endl;

        }
        void printOnlyC()
        {
            cout<<"inside class C"<<endl;
            cout<<"this->c="<<this->c<<"\t ["<<&this->c<<"]"<<endl;

        }
        ~C()
        {
            this->c=0;
            cout<<"inside dtor of Class C"<<endl;
        }

};// end of class C

//class D: public C, public B
class D: public B, public C

{
    private:
        int d;
    public:
        D()
        {
            this->d=40;
            cout<<"inside parameterless ctor of Class D"<<endl;
        }
        D(int a,int b, int c, int d):B(a,b), C(a,c),A(a)
        {
            this->d=d;
            cout<<"inside parameterized ctor of Class D"<<endl;
        }
        void print()
        {
            A::print();
            B::printOnlyB();
            C::printOnlyC();
            cout<<"inside class D"<<endl;
            cout<<"this->d="<<this->d<<"\t ["<<&this->d<<"]"<<endl;
        }
        ~D()
        {
            this->d=0;
            cout<<"inside dtor of Class D"<<endl;
        }

};// end of class D
int main(void)
{
    /*
    A obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    
    cout<<"size of obj1="<<sizeof(obj1)<<endl;  // 4 bytes

    A obj2(111); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    
    cout<<"size of obj2="<<sizeof(obj2)<<endl;// 4 bytes
    */

/*

    B obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 8+4+4=16 bytes

    B obj2(111,222); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    cout<<"size of obj2="<<sizeof(obj2)<<endl; // 8+4+4=16 bytes
*/ 

   /* C obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 8+4+4=16 bytes

    C obj2(111,333); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    cout<<"size of obj2="<<sizeof(obj2)<<endl; // 8+4+4=16 bytes   
*/
    D obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
   

    cout<<"size of obj1="<<sizeof(obj1)<<endl; //4 + 4+8 + 8+4 + 4 =32 bytes
                                               //A   B      C    D

    D obj2(111,222,333,444); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    
    cout<<"size of obj2="<<sizeof(obj2)<<endl; //  //4 + 4+8 + 8+4 + 4 =32 bytes
                                                //   A     B    C    D
                                                
    return 0;
}
