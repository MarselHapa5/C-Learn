#include <stdio.h>

int main(){
    int intTempEnter, tempFormulaInt;
    char charTempIn, charTempOut;

    
    printf("Enter temperature: ");
    scanf("%d", &intTempEnter);

    printf("Enter input tempeture symbol: ");
    scanf(" %c", &charTempIn);

    printf("Enter output temperature symbol: ");
    scanf(" %c", &charTempOut);

    tempFormulaInt = charTempIn + charTempOut;
    printf("%d", tempFormulaInt);



    return 0;
}