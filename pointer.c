#include<stdio.h>

void change(int x){
    x = 20;
}

void change1(int* x){
    *x = 20;
}

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", p); // == &x
    printf("%d\n", *p); // == x
    printf("%d\n", &p);
    printf("%d\n", pp); // == &p
    printf("%d\n", *pp); // == p
    printf("%d\n", **pp); // == x
    printf("\n");

    int arr[10];
    int* p1 = arr;
    printf("%d\n", p1);
    printf("%d\n", p1 + 1);
    printf("\n");

    long long arr1[10];
    long long* p2 = arr1;
    printf("%lld\n", p2);
    printf("%lld\n", p2 + 1);
    printf("\n");
}