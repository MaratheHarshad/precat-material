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
           /* if(this->arr!=NULL)
            {
                delete [] this->arr;
                this->arr=NULL;
                cout<<"inside dtor of Array class"<<endl;
            }
            */
        }
}; // end of class

int main(void)
{
    Array a1(7);
    cout<<"a1="<<endl;
    a1.accept_input();
    cout<<"a1="<<endl;
    a1.display_output();
    return 0;
       
}