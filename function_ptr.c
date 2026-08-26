#include<stdio.h>
typedef void (*CALLBACK)(int);

void test(int x){
    printf("%d", x);
}

int main(){
    void (*func)(int);
    func = test;
    func(10);
}

/*
int main(){
    CALLBACK func;
    func = test;
    func(10);
}
*/
