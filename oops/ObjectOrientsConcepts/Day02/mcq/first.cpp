#include<iostream>
#include<string.h>
using namespace std;

class date
{
    int day,month,year;
    
    date()
    {
    day=25;
    month=4;
    year=2020;
    }
    public:
    void printDate()
    {
    cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
    }
};
int main()
{
    date today;
    today.printDate();
    return 0;
}