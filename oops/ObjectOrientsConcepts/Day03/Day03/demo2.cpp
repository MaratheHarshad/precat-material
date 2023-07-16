// static member fun is designed to called on class name
// in cpp we can call static member fun on class name and obejct name also

// which function have this pointer
// all member function has this pointer except static member function

//which function dont have this pointer
// 1. global functions
// 2. friend functions
// 3.  staitc member function

#include <iostream>
using namespace std;
class Maths
{
    public:
    // static member fun are called as class members
        static int sum(int n1, int n2)
        {
            return n1+n2;
        }
        static int minus(int n1, int n2)
        {
            return n1-n2;
        }
        // non static member fun are called as instance members
        int multiply(int n1, int n2)
        {
            return n1*n2;
        }

};// end of class Maths
int main(void)
{
    int ans;
    ans= Maths::sum(10,20);
    cout<<" addition using class name ="<<ans<<endl;
    ans= Maths::minus(10, 20);
    cout<<" sub using class name ="<<ans<<endl;
    //ans= Maths::multiply(10,20); // error as multiply is non static member fun
    //cout<<" multiply  using class name ="<<ans<<endl;
    

    // static member function can be called on class name and obeject name
    // non static member function can be called on object name only
    // non static member function can not be called on class name
    Maths obj1;
    ans= obj1.sum(10, 20);
    cout<<" addition using object name ="<<ans<<endl;
    ans= obj1.minus(10, 20);
    cout<<" sub using object name ="<<ans<<endl;
    ans= obj1.multiply(10, 20);
    cout<<" multiply  using obejct name ="<<ans<<endl;
    return 0;
}


















