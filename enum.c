#include<stdio.h>

typedef enum{
    StateIdle,
    StateRunning,
    StateStopped
} STATE;

int main(){
    STATE state = StateRunning;
    printf("%d", state);
}