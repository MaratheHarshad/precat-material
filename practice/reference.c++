// #include<iostream>
// using namespace std;

// int main(){
    

//     // assignment operator has a lowest precedence i.e the result is 2 and 6 not an 4, 8
   
     
//     int m = 2, n = 6;
//     int &x = m;
//     int &y = n;
    
//     m = x++;
//     x = m++;
    
//     n = y++;
//     y = n++;
    
//     cout << m <<" " <<n<< endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;

struct MyStructure
{
    class MyClass
    {
        public:
        void Display(int x, float y = 97.50, char ch = 'a')
        {
                cout<< x << " " << y << " " << ch;
        }
    }Cls; 
}Struc;
 
int main()
{

    Struc.Cls.Display(12, 'b');
    return 0; 
}