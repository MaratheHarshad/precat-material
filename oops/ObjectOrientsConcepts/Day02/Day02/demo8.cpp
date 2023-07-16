#include<iostream>
using namespace std;
class Demo
{
    private:
        int &ref1;
        char &ref2;
        float &ref3;
    
};
int main(void)
{
    cout<<"sizeof demo="<<sizeof(Demo)<<endl;
    return 0;
}