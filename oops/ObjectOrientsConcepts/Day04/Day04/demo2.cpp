

// demo of person class (composition)
///     person  has date of birth
///     person  has per Address

// demo of inheritcance
// Employee is a Person
#include<cstring>//or //#include<string.h>
#pragma pack(1)
#include<iostream>
using namespace std;
namespace NInheritance
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
                cout<<"inside parameterless ctor of Person(Base) class"<<endl;
            }
            //     Person         Address                                 Date
            //     ==========  =======================================   ====================
            Person(char *name,char*addressinfo, char* city, int pincode,int dd, int mm, int yy):perAddress(addressinfo,city,pincode), birth_date(dd, mm, yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterized ctor of Person(Base) class"<<endl;
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
                cout<<"inside dtor of Person (Base) class"<<endl;
            }
    };// end of person class

//        child            parent
//class  DerivedClass:Mode baseClass   
    class Employee: public Person
    {
        private:
            int empno;
            char designation[20];
            float sal;
            static int counter;
        public:
            Employee()
            {
                Employee::counter++;
                this->empno= Employee::counter;
                strcpy(this->designation,"S/W Dev");
                this->sal=10000;
                cout<<"inside parameterless ctor of Employee(Derived) class"<<endl;
            }   
            ///          Employee                                  Person  
            //       =============================  ===========================================================================
            Employee(char * designation, float sal,char *name,char*addressinfo, char* city, int pincode,int dd, int mm, int yy):Person(name,addressinfo, city,pincode, dd, mm, yy)
            {
                Employee::counter++;
                this->empno= Employee::counter;
                strcpy(this->designation,designation);
                this->sal=sal;
                cout<<"inside parameterized ctor of Employee(Derived) class"<<endl;
            }
            void print_employee_info()
            {
                cout<<"employee info= "<<endl;
                cout<<"Employee id="<<this->empno<<endl;
                cout<<"Employee designation="<<this->designation<<endl;
                cout<<"Employee sal="<<this->sal<<endl;
                //BaseClassName::MethodName();
                Person::print_person_info(); // name address birthdate
            }
            ~Employee()
            {
                this->empno= 0;
                strcpy(this->designation,"");
                this->sal=0;
                cout<<"inside dtor of Employee(Derived) class"<<endl;
            }


    };// end of employee class

    int Employee::counter=1000;  // global defination for  employee
}// end of namespace
using namespace NInheritance;

int main(void)
{ 
    Employee e1; // paramaterless ctor
    cout<<"e1="<<endl;
    e1.print_employee_info();                   //  Person    Employee
    cout<<"size of p1="<<sizeof(e1)<<endl; // 20+54+12 =86 + 4+20+4 =114
    ///     Perosn       Address                            Date
 //           ===    ====================================  =========
    Employee e2("S/w Testing",9000,"XYZ","Rajiv Gandi IT Park","Mulashi",410001,11,1,1990 ); // paramterized
    cout<<"e2="<<endl;
    e2.print_employee_info();               //    Person    Employee
    cout<<"size of e2="<<sizeof(e2)<<endl; // 20+54+12 =86 + 28 =  114bytes


    return 0;
}