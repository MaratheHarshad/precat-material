// demo of deep copy
#include<iostream>
using namespace std;
class Array
{
    private:
        int *arr;
        int size;
    public:
        Array(int size=5)
        {
            this->size=size;
            this->arr=new int[this->size];
            int index;
            for(index=0; index<this->size; index++)
            {
                this->arr[index]=0;
            }
            cout<<"inside parameterized ctor of Array class"<<endl;
        }

        //classNAme( const ClassNAme& objNAme)
        Array (const Array& other)
        { 
            //&a2      other is ref of a1
            this->size= other.size; // step copy size
            this->arr=new int[this->size]; // step 2 copy size
            //step 3 copy data;
            int index;
            for(index=0; index<this->size; index++)
            {
                this->arr[index]=other.arr[index];
            }
            cout<<"inside copy ctor of Array class"<<endl;
        }
        void accept_input()
        {
            int index;
            for(index=0; index<this->size; index++)
            {
                cout<<"this->arr["<<index<<"]=";
                cin>>this->arr[index];
            }
        }
        void display_output()
        {
            int index;
            for(index=0; index<this->size; index++)
            {
                cout<<"this->arr["<<index<<"]\t"<<this->arr[index]<<"\t["<< &this->arr[index]<<"]"<<endl;;
                
            }
        }

        ~Array()
        {
            if(this->arr!=NULL)
            {
                delete [] this->arr;
                this->arr=NULL;
                cout<<"inside dtor of Array class"<<endl;
            }
        
        }
}; // end of class

int main(void)
{
    Array a1;
    cout<<"a1="<<endl;
    a1.accept_input();
    cout<<"a1="<<endl;
    a1.display_output();


   // when we assign allready created obejct a1 to newly created object a2
   // then internally copy ctor will be called for that newly created object(a2)
    Array a2=a1; 
    cout<<"a2="<<endl;
    a2.display_output();
    return 0;
       
}
// // when we dont write copy ctor compiler will give default copy ctor
// deflault copy ctor does shallow

/*
Copy Constructor:
it is a special member function of a class which is having same of that class
and which gets called implicitly.
1. when we pass an object to the function by value.
2. when we return an object from function by value.
3.when we assign already created object to the newly created
object (object initialization)


 // when we assign allready created object  to allready created object a2
   // then internally assignment opertaor function  will be called for that obejct

   Array a1, a2;

   a1=a2;  // assigment operator fun

   a2=a1;// assigment operator fun


*/
