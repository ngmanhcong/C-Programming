#include<stdio.h>

void test(
    _In_ int a,
    _In_ int result
){
    printf("%d %d",a, result);
}

int main(){
    test(10, 20);
}