#include<stdio.h>
#include<string.h>

typedef struct {
    int age;
    char name[50];
} person;

int main(){
    person a;
    person* p = &a;
    a.age = 20;

    printf("Tuoi cua a la: %d\n", a.age);
    printf("Tuoi cua a la: %d\n", p -> age);
    printf("Tuoi cua a la: %d\n", (*p).age);
}