#include<iostream>
using namespace std;
int main(void)
{
    int no1, no2, ans;

    try 
    {
        cout<<"enter no1=";
        cin>>no1;
        cout<<"enter no2=";
        cin>>no2;

        if( no2==0)
            throw 1; //  int
             //throw 'a'; // char
               //throw 1.1F;  // float
                //throw 1.1f;  // float
                //throw 1.1;  // double
               
        ans= no1/no2;


        cout<<"ans =" <<ans<<endl;
    }
    catch(int)  //(ellipse)
    {
        cout<<" inside int block1"<<endl;
        cout<<" can not divide by zero"<<endl;

    }
    catch(int)
    {
        cout<<" inside int block2"<<endl;
        cout<<" can not divide by zero"<<endl;

    }
    catch(float)
    {
        cout<<" inside float block"<<endl;
        cout<<" can not divide by zero"<<endl;

    }
      catch(...)
    {
        cout<<" inside generic  block"<<endl;
        cout<<" can not divide by zero"<<endl;
    } 


}
