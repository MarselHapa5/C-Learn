#include <stdio.h>
#include <string.h>

int main(){
    char str[100], command;
    int i;

    printf("Encrypt (e) or decrypt (d): ");
    scanf(" %c", &command);

    printf("Enter string: ");
    scanf("%99s", str);

    switch (command){
    case 'e':
        for (i = 0; i < strlen(str); i++){
            str[i] = str[i] + 1;
        }

        break;
    
    case 'd':
        for (i = 0; i < strlen(str); i++){
            str[i] = str[i] - 1;
        }
        break;
    
    default:
        break;
    }
    printf("%s", str);
    return 0;
}