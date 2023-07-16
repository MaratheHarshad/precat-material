#include <iostream>
using namespace std;
void add(int, int);
void add(int, int, int);
void add(double, double);

void add(int, double);
void add(double, int);

int main()
{
    add(10, 20);
    add(10.20, 20.20);
    add(10, 20, 30);
    add(10, 20.10);
    add(10.10, 20);
}

void add(int n2, int n1)
{
    cout << "Addition of 2 int numbers = " << n1 + n2 << endl;
}

void add(int n1, int n2, int n3)
{
    cout << "Addition of 3 int numbers = " << n1 + n2 + n3 << endl;
}

void add(double n1, double n2)
{
    cout << "Addition of 2 double numbers = " << n1 + n2 << endl;
}

void add(int n1, double n2)
{
    cout << "Addition of 1 int and 1 double number = " << n1 + n2 << endl;
}

void add(double n1, int n2)
{
    cout << "Addition of 1 double and 1 int number = " << n1 + n2 << endl;
}