// demo of gettor method / inspector
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

        // inspector dont modify state object
        //int get_real(Complex * const this)
        int get_real()
        {
            return this->real;
        }
        //int get_imag(Complex * const this)
        int get_imag()
        {
            return this->imag;
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
 
    r= c1.get_real();
    i= c1.get_imag();
    cout<<"real="<<r<<"\t imag="<<i<<endl;
    cout<<"c1"<<endl;
    c1.print_output();


    return 0;
}


