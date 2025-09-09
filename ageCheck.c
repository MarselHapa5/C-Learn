#include <stdio.h>

int main(){
    int number;

    printf("Enter your age: ");
    scanf("%d", &number);

    if(number < 18){
        printf("\x1b[31mAccess denied");
    }
    else if(number >= 18){
        if(number >= 100){
            printf("\x1b[33mReally?\n");
        }
        printf("\x1b[32mAccess granted");
    }
    printf("\x1b[0m");
    return 0;
}