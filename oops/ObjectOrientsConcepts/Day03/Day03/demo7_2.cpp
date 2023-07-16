// demo of person class (composition)
///     person  has date of birth
///     person  has per Address

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

    }; // end of address class

    class Person
    {
        private:
            char name[20];
            Date birth_date;    
            Address perAddress;
                  
        public:
            Person()
            {
                strcpy(this->name,"ABC");
                cout<<"inside parameterless ctor of Person class"<<endl;
            }
            //     Person         Address                                 Date
            //     ==========  =======================================   ====================
            Person(char *name,char*addressinfo, char* city, int pincode,int dd, int mm, int yy):perAddress(addressinfo,city,pincode), birth_date(dd, mm, yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterized ctor of Person class"<<endl;
            }
            void print_person_info()
            {
                cout<<"person info ="<<endl;
                cout<<"name="<<this->name<<endl;
                //object_name->method_name();  in composition
                this->birth_date.print();
                this->perAddress.print();
            }
            ~Person()
            {
                strcpy(this->name,"");
                cout<<"inside dtor of Person class"<<endl;
            }
    };// end of person class
}// end of namespace
using namespace NComposition;

int main(void)
{ 
    Person p1; // paramaterless ctor
    cout<<"p1="<<endl;
    p1.print_person_info();
    cout<<"size of p1="<<sizeof(p1)<<endl; // 20+54+12 =86 bytes
    ///     Perosn       Address                            Date
 //           ===    ====================================  =========
    Person p2("XYZ","Rajiv Gandi IT Park","Mulashi",410001,11,1,1990 ); // paramterized
    cout<<"p2="<<endl;
    p2.print_person_info();
    cout<<"size of p2="<<sizeof(p2)<<endl; // 20+54+12 =86 bytes


    return 0;
}