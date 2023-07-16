#include <iostream>

int num = 10; // global namespace scope

namespace na
{
    int num = 20; // part of na namespace
}

int main()
{
    printf("Value of num from global namespace scope = %d\n", num);
    printf("Value of num from na namespace scope = %d\n", na::num);

    return 0;
}