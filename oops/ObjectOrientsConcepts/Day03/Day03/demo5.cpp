// demo of dtor ~
#include<stdlib.h>
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
            cout<<"inside parameterless ctor of Compelx class"<<endl;
        }
        // 2.2 parameterized ctor with 1 arg of Complex class
        //Complex(Complex * const this,int value)
        Complex(int value)
        {
            this->real=value;
            this->imag=value;
            cout<<"inside parameterized ctor with 1 arg of Complex class"<<endl;
        }
        // 2.3 parameterized ctor with 2 arg of Complex class
        //Complex(Complex * const this,int real, int imag)
        Complex(int real, int imag)
        {
            this->real=real;
            this->imag=imag;
            cout<<"inside parameterized ctor with 2 arg of Complex class"<<endl;
        }

        ~Complex()
        {
            cout<<"===================="<<endl;
            this->print_output();
            cout<<"===================="<<endl;
            this->real=0;
            this->imag=0;
            cout<<"inside dtor of Complex class"<<endl;
        }
        


}; // end of class complex 
int main(void)
{
    Complex *ptr1=(Complex*) malloc (1* sizeof(Complex));
    ptr1->print_output();

    free(ptr1);
    ptr1=NULL; // ptr1=0;
    cout<<"memory is freed"<<endl;


    Complex *ptr2= new Complex ;// parameterless ctor
    ptr2->print_output();

    delete ptr2;
    ptr2=NULL; // ptr3=0;
    cout<<"memory is freed"<<endl;

    Complex *ptr3= new Complex (11,22);// parameterized ctor
    ptr3->print_output();

    delete ptr3;
    ptr3=NULL; // ptr3=0;
    cout<<"memory is freed"<<endl;

 
    return 0;
}
// valgrind is tool to check memory leakage ( linux / max)
// it is not present on windows
