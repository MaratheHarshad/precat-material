#include <iostream>

int main()
{
    bool b1 = true;
    bool b2 = false;
    wchar_t ch = L'A';

    printf("Value of b1 = %d\n", b1);
    printf("Value of b2 = %d\n", b2);
    printf("size of bool = %d\n", sizeof(bool));

    printf("Value of ch = %c\n", ch);
    printf("Value of ch = %d\n", ch);
    printf("size of wchar_t = %d\n", sizeof(wchar_t));
    return 0;
}