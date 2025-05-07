#include <stdio.h>

int main(){
    while(1){
        char cmd;
        printf("Enter command: \n");
        scanf("%c", &cmd);

        if ((cmd == 'h' || cmd == 'H')){
            printf("Hello! \n");
        }
        if ((cmd == 'e' || cmd == 'E')){
            break;
        }
    }
    return 0;
}