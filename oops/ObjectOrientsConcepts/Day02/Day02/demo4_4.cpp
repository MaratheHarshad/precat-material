// demo of setter method /mutator
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

// mutator(settor method) modify state of the obejct
//        void set_real(Complex * const this,int real)
        void set_real(int real)
        {
        //data member
            this->real=real;
                      // local variable
        }
        //        void set_imag(Complex * const this,int i)
        void set_imag(int i)
        {
            // data member
            imag= i;
                // local
        }

        

}; // end of class complex
 
int main(void)
{
    Complex c1; // local object

    int r,i;
    cout<<"enter real=";
    cin>>r;
    c1.set_real(r);

    cout<<"enter imag=";
    cin>>i;
    c1.set_imag(i);
    cout<<"c1="<<endl;
    c1.print_output(); // real=0   imag=0

    return 0;
}