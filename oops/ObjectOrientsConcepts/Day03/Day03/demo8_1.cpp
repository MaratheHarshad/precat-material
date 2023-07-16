// demo  operator overloading using member function  (cpp function)

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
        // Complex c3= c1.Minus(c2);
        Complex Minus(Complex other1)
        {
            Complex temp;
            //         &c1          c2
            temp.real= this->real - other1.real;
            temp.imag= this->imag - other1.imag;
            return temp;
        }
         Complex operator-(Complex other1)
        {
            Complex temp;
            //         &c1          c2
            temp.real= this->real - other1.real;
            temp.imag= this->imag - other1.imag;
            return temp;
        }


}; // end of class complex 


int main(void)
{
    Complex c1(30,40), c2(10,20);

    cout<<"c1="<<endl;
    c1.print_output(); // real 30 imag=40

    cout<<"c2="<<endl; 
   c2.print_output();  // real 10 imag=20

   Complex c3= c1.Minus(c2);
    cout<<"c3="<<endl; 
   c3.print_output();  // real 20 imag=20

    
    Complex c4= c1 - c2; //Complex c4=c1.operator-(c2);
    cout<<"c4= operator overloading by member function"<<endl; 
    c4.print_output();  // real 20 imag=20

 
    return 0;
}

