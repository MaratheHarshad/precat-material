/*
types of member function
1. facility of input / output 
2. ctor
3. dtor
4. mutator /  setter methods
5. inspectors / getter methods
*/

// demo of default ctor
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

}; // end of class complex
 Complex c1;  // global object
int main(void)
{
   Complex c2; // local object
    cout<<"c1="<<endl;
    c1.print_output(); // real=0   imag=0

    cout<<"c2="<<endl;
    c2.print_output(); // real=garbage value   imag=garbage value


    static Complex c3; // static object
    cout<<"c3="<<endl;
    c3.print_output(); // real=0   imag=0

    return 0;
}