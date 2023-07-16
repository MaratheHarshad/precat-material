// demo of address class
#include<cstring>//or //#include<string.h>
#pragma pack(1)
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

    class Address
    {
        private:
            char addressinfo[30];
            char city[20];
            int pinocode;
        public:
            Address()
            {               //d s
                strcpy(this->addressinfo,"Market yard");  // a=b;
                strcpy(this->city,"pune");
                this->pinocode=411037;
                cout<<"inside parameterless ctor of Address class"<<endl;
            }

            Address(char*addressinfo, char* city, int pincode)
            {               //d s
                strcpy(this->addressinfo,addressinfo);  // a=b;
                strcpy(this->city,city);
                this->pinocode=pincode;
                cout<<"inside parameterized ctor of Address class"<<endl;
            }
            void print()
            {
                cout<<"address ="<<endl;
                cout<<"this->addressinfo= "<<this->addressinfo<<endl;
                cout<<"this->city= "<<this->city<<endl;
                cout<<"this->pincode= "<<this->pinocode<<endl;
            }
            ~Address()
            {               //d s
                strcpy(this->addressinfo,"");  // a=b;
                strcpy(this->city,"");
                this->pinocode=0;
                cout<<"inside dtor of Address class"<<endl;
            }

    };
}// end of namespace
using namespace NComposition;

int main(void)
{ 
     Address a1; // paramaterless ctor
    cout<<"a1="<<endl;
    a1.print();
    cout<<"size of a1="<<sizeof(a1)<<endl; // 30+20+4=54 bytes

    Address a2("Rajiv Gandi IT Park","Mulashi",410001); // paramterized
    cout<<"a2="<<endl;
    a2.print();
    cout<<"size of a2="<<sizeof(a2)<<endl; // 54 bytes


    return 0;
}