#include<stdio.h>

void Process(void (*callback)(int)){
    callback(10);
}

void Print(int x){
    printf("%d\n", x);
}

int main(){
    Process(Print);
}