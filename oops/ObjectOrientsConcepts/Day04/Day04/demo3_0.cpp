// diamond problem sol no1  with public data member

#include<iostream>
using namespace std;
class A
{
    public:
        int a;

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

class B: public A
{
    public:
        int b;

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
            cout<<"this->a="<<this->a<<"\t ["<<&this->a<<"]"<<endl;
            cout<<"this->b="<<this->b<<"\t ["<<&this->b<<"]"<<endl;

        }
        ~B()
        {
            this->b=0;
            cout<<"inside dtor of Class B"<<endl;
        }

};// end of class B

class C: public A
{
    public:
        int c;

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
            cout<<"this->a="<<this->a<<"\t ["<<&this->a<<"]"<<endl;
            cout<<"this->c="<<this->c<<"\t ["<<&this->c<<"]"<<endl;

        }
        ~C()
        {
            this->c=0;
            cout<<"inside dtor of Class C"<<endl;
        }

};// end of class C

//class D: public B, public C
class D: public C, public B
{
    public:
        int d;

        D()
        {
            this->d=40;
            cout<<"inside parameterless ctor of Class D"<<endl;
        }
        D(int a,int b, int c, int d):B(a,b), C(a,c)
        {
            this->d=d;
            cout<<"inside parameterized ctor of Class D"<<endl;
        }
        void print()
        {
            B::print();
            C::print();
            cout<<"inside class D"<<endl;
            //"D::a" is ambiguousC/C++(266)
            //cout<<"this->a="<<this->a<<"\t ["<<&this->a<<"]"<<endl;
            cout<<"this->B::a= via class B "<<this->B::a<<"\t ["<<&this->B::a<<"]"<<endl;
            cout<<"this->C::a= via class C "<<this->C::a<<"\t ["<<&this->C::a<<"]"<<endl;

            cout<<"this->c="<<this->c<<"\t ["<<&this->c<<"]"<<endl;
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
    cout<<"obj1.a="<<obj1.a<<"\t["<<&obj1.a<<"]"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl;  // 4 bytes

    A obj2(111); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    cout<<"obj2.a="<<obj2.a<<"\t["<<&obj2.a<<"]"<<endl;
    cout<<"size of obj2="<<sizeof(obj2)<<endl;// 4 bytes
    */


/*
    B obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    cout<<"obj1.a="<<obj1.a<<"\t["<<&obj1.a<<"]"<<endl;
    cout<<"obj1.b="<<obj1.b<<"\t["<<&obj1.b<<"]"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 4+4=8 bytes

    B obj2(111,222); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    cout<<"obj2.a="<<obj2.a<<"\t["<<&obj2.a<<"]"<<endl;
    cout<<"obj2.b="<<obj2.b<<"\t["<<&obj2.b<<"]"<<endl;
    cout<<"size of obj2="<<sizeof(obj2)<<endl; // 4+4=8 bytes
    */

/*
    C obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    cout<<"obj1.a="<<obj1.a<<"\t["<<&obj1.a<<"]"<<endl;
    cout<<"obj1.c="<<obj1.c<<"\t["<<&obj1.c<<"]"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 4+4=8 bytes

    C obj2(111,333); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    cout<<"obj2.a="<<obj2.a<<"\t["<<&obj2.a<<"]"<<endl;
    cout<<"obj2.c="<<obj2.c<<"\t["<<&obj2.c<<"]"<<endl;
    cout<<"size of obj2="<<sizeof(obj2)<<endl; // 4+4=8 bytes   
    */
    D obj1; // parmeterless ctor
    cout<<"obj1="<<endl;
    obj1.print();
    cout<<"obj1 in main"<<endl;
    //"D::a" is ambiguousC/C++(266)

//  cout<<"obj1.a="<<obj1.a<<"\t["<<&obj1.a<<"]"<<endl;
    cout<<"obj1.b="<<obj1.b<<"\t["<<&obj1.b<<"]"<<endl;
    cout<<"obj1.c="<<obj1.c<<"\t["<<&obj1.c<<"]"<<endl;
    cout<<"obj1.d="<<obj1.d<<"\t["<<&obj1.d<<"]"<<endl;
    cout<<"size of obj1="<<sizeof(obj1)<<endl; // 8+8+4=20 bytes
                                               // B C D

    D obj2(111,222,333,444); // parmeterzied ctor
    cout<<"obj2="<<endl;
    obj2.print();
    cout<<"obj2 in main"<<endl;
    //cout<<"obj2.a="<<obj2.a<<"\t["<<&obj2.a<<"]"<<endl;
    cout<<"obj2.b="<<obj2.b<<"\t["<<&obj2.b<<"]"<<endl;
    cout<<"obj2.c="<<obj2.c<<"\t["<<&obj2.c<<"]"<<endl;
    cout<<"obj2.d="<<obj2.d<<"\t["<<&obj2.d<<"]"<<endl;
    
    cout<<"size of obj2="<<sizeof(obj2)<<endl; //  8+8+4=20 bytes   
                                                // B C D
    return 0;
}
