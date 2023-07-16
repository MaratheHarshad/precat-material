#include <stdio.h>
#include <stdlib.h>

// funtion overloading is not possible in c language

void printInt(int i){
    printf("inside integer print");
}


void printInt(int i, int j){
    printf("inside float print");
}

int main()
{
    printInt(3);

    return 0;
}
