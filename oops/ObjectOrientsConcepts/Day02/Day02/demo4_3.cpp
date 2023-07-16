// demo of dtor ~
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
            cout<<"inside parameterized ctor with 1 arg of Compelx class"<<endl;
        }
        // 2.3 parameterized ctor with 2 arg of Complex class
        //Complex(Complex * const this,int real, int imag)
        Complex(int real, int imag)
        {
            this->real=real;
            this->imag=imag;
            cout<<"inside parameterized ctor with 2 arg of Compelx class"<<endl;
        }

        ~Complex()
        {
            cout<<"===================="<<endl;
            this->print_output();
            cout<<"===================="<<endl;
            this->real=0;
            this->imag=0;
            cout<<"inside dtor of Compelx class"<<endl;
        }
        


}; // end of class complex 
int main(void)
{
    Complex c1; // parameterless
    cout<<"c1="<<endl;
    c1.print_output(); // real=10   imag=20

    Complex c2(111) ; // parameterized with 1 arg
    cout<<"c2="<<endl;
    c2.print_output(); // real=111   imag=111

    Complex c3(222,333); // parameterized with 2 arg
    cout<<"c3="<<endl;
    c3.print_output(); // real=222   imag=333
   
 
    return 0;
}
/*
stack lifo / filo

         ctor    dtor      stack
         c1        c3       [c3]  
         c2        c2       [c2]
         c3        c1       [c1]

*/
