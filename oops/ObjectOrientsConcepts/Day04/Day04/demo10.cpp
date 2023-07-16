// DEMO of RTTI
#include<typeinfo>
#include<iostream>
using namespace std;
class Shape
{
    protected:
        double area;
        double perimeter;
    public:
        Shape()
        {
            this->area=0;
            this->perimeter=0;
            cout<<"inside parameterless ctor of Shape(base) class"<<endl;
        }
        // virtual return_type fun_name()=0;
        virtual void accept_input()=0; // pure virtual function
        virtual void print_output()
        {

        }
        virtual void calculate_area()
        {            
        }

        virtual void calculate_perimeter()
        {            
        }
       // ~Shape()          checked
        virtual~Shape()        
        {
            this->area=0;
            this->perimeter=0;
            cout<<"inside dtor of Shape(base) class"<<endl;
        }

}; // end of class Shape

class Circle: public Shape
{
    protected:
        double radius;
    public:
        Circle()
        {
            this->radius=0;
            
            cout<<"inside parameterless ctor of Circle(Derived) class"<<endl;
        }
        
        void accept_input()
        {
            cout<<"enter radius=";
            cin>>this->radius;
        }
        void print_output()
        {
            cout<<"this->radius="<<this->radius<<endl;
            cout<<"this->area="<<this->area<<endl;
            cout<<"this->perimeter="<<this->perimeter<<endl;
        }
        void calculate_area()
        {            
            this->area= 3.142* this->radius* this->radius;
        }

        void calculate_perimeter()
        {            
            this->perimeter= 2* 3.142* this->radius;
        }
        
         ~Circle()        
        {
            this->radius=0;
             cout<<"inside dtor of Circle(Derived) class"<<endl;
        }

}; // end of class Circle


class Rectangle: public Shape
{
    protected:
        double l;
        double b;
    public:
        Rectangle()
        {
            this->l=0;
            this->b=0;
            
            cout<<"inside parameterless ctor of Rectangle(Derived) class"<<endl;
        }
        
        void accept_input()
        {
            cout<<"enter l=";
            cin>>this->l;
            cout<<"enter b=";
            cin>>this->b;
        }
        void print_output()
        {
            cout<<"this->l="<<this->l<<endl;
            cout<<"this->l="<<this->b<<endl;

            cout<<"this->area="<<this->area<<endl;

            cout<<"this->perimeter="<<this->perimeter<<endl;
        }
        void calculate_area()
        {            
            this->area= this->l* this->b;
        }

        void calculate_perimeter()
        {            
            this->perimeter= 2*( this->l+ this->b);
        }
        
        ~Rectangle()        
        {
            this->l=0;
            this->b=0;
             cout<<"inside dtor of Rectangle(Derived) class"<<endl;
        }

}; // end of class Rectangle
int menu_choice()
{
    int choice;
    cout<<"\n1. Circle \n 2. rectangle \n 0. Exit"<<endl;
    cout<<"enter your choice::";
    cin>>choice;
    return choice;
}
int main(void)
{
    //Shape objShape; // error as shape is abstract class
    Shape *ptrShape=NULL;
    int choice;

    do
    {
        choice= menu_choice();
        switch (choice)
        {
            case 0 : return 0;
            case 1: // circle
                    ptrShape= new Circle;  // upcasting
                    break;

            case 2: // rectangle
                    ptrShape= new Rectangle;  // upcasting
                    break;
        
            default: cout<<"invalid choice"<<endl;
                    continue;
        }
        if( ptrShape!=NULL)
        {
            cout<<"================================="<<endl;
            const type_info& info = typeid(*ptrShape);
            cout << info.name() << endl;
            cout<<"================================="<<endl;
            ptrShape->accept_input();
            ptrShape->calculate_area();
            ptrShape->calculate_perimeter();
            ptrShape->print_output();

            delete ptrShape;
            ptrShape=NULL;
            cout<<"memory is freed"<<endl;
        }
        cout<<"enter 1 to continue or 0 to exit"<<endl;
        cin>> choice;

    }while(choice!=0);

    return 0;
}