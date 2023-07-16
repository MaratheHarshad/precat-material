// demo of Date class
#include<iostream>
using namespace std;
namespace NComposition
{
    class Date
    {
        private:
            int dd;
            int mm;
            int yy;
        public:
            Date()
            {
                this->dd=1;
                this->mm=6;
                this->yy=1995;
                cout<<"inside parameterless ctor of Date class"<<endl;
            }

            Date(int dd, int mm , int yy)
            {
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
                cout<<"inside parameterized ctor of Date class"<<endl;
            }
            void print()
            {
                cout<<"date="<<endl;
                cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
            }

            ~Date()
            {
                this->dd=0;
                this->mm=0;
                this->yy=0;
                cout<<"inside dtor of Date class"<<endl;
            }

    };// end of class Date
}// end of namespace
using namespace NComposition;

int main(void)
{ 
     Date d1; // paramaterless ctor
    cout<<"d1="<<endl;
    d1.print();
    cout<<"size of d1="<<sizeof(d1)<<endl; // 4*3=12 bytes

    Date d2(11,1,1990); // paramterized
    cout<<"d2="<<endl;
    d2.print();
    cout<<"size of d2="<<sizeof(d2)<<endl; // 4*3=12 bytes


    return 0;
}