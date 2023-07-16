// size of empty class object is one byte ( 8 bits)
#pragma pack(1)
#include<iostream>
using namespace std;
struct empty
{
};
class Empty
{
};
int main(void)
{
    Empty e1; // class Empty e1;
    empty e2; // struct empty e2;

    cout<<"sizeof e1="<<sizeof(e1)<<endl;
    cout<<"sizeof e2="<<sizeof(e2)<<endl;
    cout<<"&e1 ="<<&e1<<endl;
    cout<<"&e2 ="<<&e2<<endl;
    //cout<<"&Empty ="<<&Empty<<endl;  // error
    //cout<<"&empty ="<<&empty<<endl;  // error

   return 0;
}