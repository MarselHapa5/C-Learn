#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double a, b, result;
    char operator;

    start:

    printf("Введите первое число: ");
    scanf("%lf", &a);
    printf("\n");
    printf("Введите оператор: ");
    scanf(" %c", &operator);
    printf("\n");
    printf("Введите второе число: ");
    scanf("%lf", &b);
    printf("\n");

    if (operator == '+'){
        result = a + b;
    } else if (operator == '-'){
        result = a - b;
    } else if (operator == '*'){
        result = a * b;
    } else if (operator == '/'){
        result = a / b;
    }
    else {
        printf("Введенные данные неккоректны!\n");
        goto start;
    }

    printf("%lf\n", result);

    goto start;

    return 0;
}