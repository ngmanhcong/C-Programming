#include<stdio.h> 

typedef struct _person {
    int age;
    char name[20];
} person, *ptr_person;

int main(){
    person a;
    ptr_person ap = &a;
    a.age = 20;
    printf("tuoi cua a la: %d\n", a.age);
    printf("tuoi cua a la: %d\n", ap -> age);

    ap -> age = 30;
    printf("tuoi cua a la: %d", ap -> age);
}