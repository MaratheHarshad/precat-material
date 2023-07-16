#include <iostream>

namespace na
{
    int num1 = 10; // part of na namespace
    namespace nb
    {
        int num1 = 20; // part of nb namespace
    }
}
using namespace na;
int main()
{
    printf("Value of num1 from na namespace scope = %d\n", num1);
    printf("Value of num2 from nb namespace scope = %d\n", nb::num1);

    return 0;
}