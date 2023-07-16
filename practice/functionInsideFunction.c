#include<stdio.h>

// we cannot declare or initialize function inside function

// void print2();
void print(){
    printf("%s", "Good Night");


    
    void print2(){
        printf("%s", "Good Night");
    }

    print2();
}
int main(){
    print();

    print2();
}