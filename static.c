#include<stdio.h>

static int a = 0;

void cong(){
    a++;
    printf("%d\n", a);
}

void cong2(){
    a++;
    printf("%d", a);
}

int main(){
    cong();
    cong();
    cong();
    cong2();
}