#include <stdio.h>
#include <math.h>

int main(){
    int tempTransNum;
    char tempSymIn, tempSymOut;
    double tempNumIn;

    printf("Enter temperature: ");
    scanf("%lf", &tempNumIn);
    printf("\n");
    printf("Enter IN temperature symbol(capitalize): ");
    scanf(" %c", &tempSymIn);
    printf("\n");
    printf("Enter OUT temperature symbol(capitalize): ");
    scanf(" %c", &tempSymOut);
    printf("\n");

    tempTransNum = tempSymIn - tempSymOut;

    printf("\n");

    switch(tempTransNum){
        case 5:
            printf("%lf", (tempNumIn - 273.15) * 9.0/5.0 + 32.0);
            break;
        case 8:
            printf("%lf", tempNumIn - 273.15);
            break;
        case -5:
            printf("%lf", (tempNumIn - 32.0) * 5.0/9.0 + 273.15);
            break;
        case 3:
            printf("%lf", (tempNumIn - 32.0) * 5.0/9.0);
            break;
        case -8:
            printf("%lf", tempNumIn + 273.15);
            break;
        case -3:
            printf("%lf", tempNumIn * 9.0/5.0 + 32.0);
            break;
        case 0:
            printf("%lf", tempNumIn);
        default:
            printf("ERROR!!!");
    }

    return 0;
}