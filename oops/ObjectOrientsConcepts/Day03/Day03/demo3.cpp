// size of object is sizeof all non static data member of class
#include<iostream>
using namespace std;
class Chair
{
    private:
        // non static data member
        int id;
        int height;
        //static data member
        static float price;
        static int counter;
    public:
        Chair()
        {
            Chair::counter++;
            this->id= Chair::counter;
            this->height=5;
        }
        Chair(int height)
        {
            Chair::counter++;
            this->id= Chair::counter;
            this->height=height;

        }
        // static member function can access only static data member
        // static member function can not access non static data member
        static void set_price(float price)
        {
            Chair::price= price;
            //this->height=9;  // error //error as height is non static data member
            //id=1001; //error as id is non static data member
        }
        // non static member function can access both static data member and non static data member
        
        void print()
        {
            cout<<"this->id="<<this->id<<"\t["<<&this->id<<"]"<<endl;
            cout<<"this->height="<<this->height<<"\t["<<&this->height<<"]"<<endl;
            cout<<"Chair::price="<<Chair::price<<"\t["<<&Chair::price<<"]"<<endl;
            cout<<"Chair::counter="<<Chair::counter<<"\t["<<&Chair::counter<<"]"<<endl;
        }
        ~Chair()
        {
            this->id=0;
            this->height=0;
        }

};// end of chair class
// data_type ClassName::static_Data_mmeber=value;
int Chair::counter=1000;
float Chair::price=500;
//int Chair::counter;   counter=0

// we have to provide global defination for static data member of class
int main()
{
    Chair c1;
    cout<<"c1="<<endl;
    c1.print(); // counter=1001 id= 1001 height=5 price=500
    cout<<"size of c1="<<sizeof(c1)<<endl; // sizeof(id)+ sizeof(height) 

    Chair c2(6);
    cout<<"c2="<<endl;
    c2.print(); // counter=1002 id= 1002 height=6 price=500
    cout<<"size of c2="<<sizeof(c2)<<endl; // sizeof(id)+ sizeof(height) 

    cout<<"c1="<<endl;
    c1.print(); // counter=1002 id= 1001 height=5 price=500
    cout<<"size of c1="<<sizeof(c1)<<endl; // sizeof(id)+ sizeof(height) 

    Chair c3(4), c4(7);
    cout<<"c3="<<endl;
    c3.print(); // counter=1004 id= 1003 height=4 price=500
    cout<<"size of c2="<<sizeof(c2)<<endl; // sizeof(id)+ sizeof(height) 

    cout<<"c4="<<endl;
    c4.print(); // counter=1004 id= 1004 height=7 price=500
    cout<<"size of c2="<<sizeof(c2)<<endl; // sizeof(id)+ sizeof(height) 

    return 0;
}