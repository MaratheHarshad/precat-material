/*
types of member function
1. facility of input / output 
2. ctor
3. dtor
4. mutator /  setter methods
5. inspectors / getter methods
*/

// demo 1. facility of input / output 

#include<iostream>
using namespace std;
class Complex
{
    private:
       // variables(c) / data members( cpp) / field (java)
        int real;
        int imag;
    public:
        // member function(cpp ) or method(java)
        // c2.accept_input(); // this=&c2;
       // c1.accept_input(); // this=&c1;
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
        // c2.print_output(); // this=&c2;
       // c1.print_output(); // this=&c1;
        //void print_output(Complex * const this)
        // 1.2 out put
        void print_output()
        {
            cout<<"this->real="<<this->real<<"\t["<< &this->real<<"]"<<endl;
            cout<<"this->imag="<<this->imag<<"\t["<< &this->imag<<"]"<<endl;
        }

}; // end of class complex

int main(void)
{
    Complex c1, c2;
    cout<<"c1"<<endl;
    c1.accept_input();

    cout<<"c1"<<endl;
    c1.print_output();

    cout<<"c2"<<endl;
    c2.accept_input();

    cout<<"c2"<<endl;
    c2.print_output();

    return 0;
}
/*
c prog                          cpp
struct Complex c1, c2;        Complex c1, c2;
accept_input(&c1);            c1.accept_input();
print_output(&c1);            c1.print_output();
accept_input(&c2);            c2.accept_input();
print_output(&c2);            c2.print_output();

*/



