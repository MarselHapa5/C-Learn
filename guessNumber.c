#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int random_number = rand() % 100 + 1, userAnswer, i;

    printf("\x1b[33mGuess the number (1-100)\n");
    for (i = 0; i < 7; i++){
        printf("\x1b[33mGuess: ");
        scanf("%d", &userAnswer);
        if (random_number > userAnswer){
            printf("\x1b[31mToo low!\n");
            continue;
        } else if(random_number < userAnswer){
            printf("\x1b[31mToo high!\n");
            continue;
        } else if(random_number == userAnswer){
            printf("\x1b[32mYou correct! You won!\x1b[0m");
            break;
        }
        
    }
    
    return 0;
}