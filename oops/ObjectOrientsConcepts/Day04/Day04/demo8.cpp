#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
float sum(float a, float b)
{
    return a+b;
}
int main()
{
    cout<<"add of int ="<<sum(10,20)<<endl;
    cout<<"add of float="<<sum(10.2f,20.1f)<<endl;
    cout<<"add of float="<<sum(10.2F,20.1F)<<endl;

    return 0;
} // g++ -S demo8.cpp
