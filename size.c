#include<stdio.h>

void change(int x){
    x = 20;
}

void change1(int* x){
    *x = 20;
}

int main(){
    int a = 10;
    int b[100];
    int *ptr = b;
    printf("Size of a = %d\n", sizeof(a));
    printf("Size of b = %d\n", sizeof(b));
    printf("Size of p = %d\n", sizeof(ptr));
    printf("\n");

    int c = 10;
    change(c);
    printf("c_new = %d\n", c);
    printf("\n");

    change1(&c);
    printf("c_after = %d\n", c);
    printf("\n");
}