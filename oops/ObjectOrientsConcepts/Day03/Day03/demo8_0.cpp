/*
struct emp
{
    int empno;
    char name[10];
    float sal;
};
struct emp e1, e2;

e1 > e2; // not allowed in c
e1 < e2; // not allowed in c
e1 == e2 // not allowed in c
e2 != e2 // not allowed in c

e1=e2; // allowed

e1.sal >  e2.sal // allowed in c
e1.sal == e2.sal // allowed in c
e1.sal != e2.sal // allowed in c

strcmp(e1.name, e2.name);
strcasecmp(e1.name, e2.name);  gcc  strcmpi



in cpp we can overload operator by 2 ways
1. using friend function  (c style)
2. using member function  (cpp style)
*/
// demo  operator overloading using friend function  (c style)

#include<iostream>
using namespace std;
class Complex
{
    private:
       // variables(c) / data members( cpp) / field (java)
        int real;
        int imag;
    public:
     
       //void accept_input(classname * const this)
        //void accept_input(Complex * const this)
        // 1.1 input
        void accept_input()
        {
            cout<<"enter real=";
            cin>>this->real;
            cout<<"enter imag=";
            cin>>this->imag;            
        }
    
        //void print_output(Complex * const this)
        // 1.2 out put
        void print_output()
        {
            cout<<"this->real="<<this->real<<"\t["<< &this->real<<"]"<<endl;
            cout<<"this->imag="<<this->imag<<"\t["<< &this->imag<<"]"<<endl;
        }

         void init_compelex()
         {
            this->real=11;
            this->imag=22;
         }
        //2.1 parameterless ctor or no argrument ctor
        //Complex(Complex * const this)
        Complex()
        {
            this->real=10;
            this->imag=20;
        }
        // 2.2 parameterized ctor with 1 arg of Complex class
        //Complex(Complex * const this,int value)
        Complex(int value)
        {
            this->real=value;
            this->imag=value;
        }
        // 2.3 parameterized ctor with 2 arg of Complex class
        //Complex(Complex * const this,int real, int imag)
        Complex(int real, int imag)
        {
            this->real=real;
            this->imag=imag;
        }

        ~Complex()
        {
           
            this->real=0;
            this->imag=0;
        }
    friend Complex sum (Complex other1, Complex other2);
    friend Complex operator+ (Complex other1, Complex other2);


}; // end of class complex 

Complex sum (Complex other1, Complex other2)
{
    Complex temp;
    temp.real= other1.real +other2.real;
    temp.imag= other1.imag +other2.imag;
    return temp;
}

Complex operator+ (Complex other1, Complex other2)
{
    Complex temp;
    temp.real= other1.real +other2.real;
    temp.imag= other1.imag +other2.imag;
    return temp;
}
int main(void)
{
    Complex c1(30,40), c2(10,20);

    cout<<"c1="<<endl;
    c1.print_output(); // real 30 imag=40

    cout<<"c2="<<endl; 
   c2.print_output();  // real 10 imag=20

   Complex c3= sum(c1,c2);
    cout<<"c3="<<endl; 
   c3.print_output();  // real 40 imag=60

    
    Complex c4= c1 + c2; //Complex c4=operator+( c1,c2);
    cout<<"c4= operator overloading by friend function"<<endl; 
    c4.print_output();  // real 40 imag=60

 
    return 0;
}

