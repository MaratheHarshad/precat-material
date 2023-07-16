// swap by call by reference
#include<iostream>
using namespace std;
// n1 is reference of no1
// n2 is reference of no2
void swap(int &n1, int &n2)
{
    int temp=0;
    cout<<"before swap in swap n1="<<n1<<" \t n2="<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"after swap in swap n1="<<n1<<" \t n2="<<n2<<endl;
    return;
}
int main(void)
{
    int no1=10, no2=20;
    cout<<"before swap in main no1="<<no1<<" \t no2="<<no2<<endl;
    swap(no1, no2); // no1 , no2 actual arg
    cout<<"after swap in main no1="<<no1<<" \t no2="<<no2<<endl;
    return 0;

}
