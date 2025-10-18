#include <stdio.h>

int main(){
    double height, weight, bmi;

    printf("Enter height(in meters): ");
    scanf("%lf", &height);
    printf("Enter weight(in kilograms): ");
    scanf(" %lf", &weight);

    bmi = weight / (height * height);

    if(bmi < 18.5){
        printf("BMI: %.2lf (Underweight)", bmi);
    } else if((bmi >= 18.5) && (bmi < 24.9)){
        printf("BMI: %.2lf (Normal)", bmi);
    } else if((bmi >= 25) && (bmi < 29.9)){
        printf("BMI: %.2lf (Overweight)", bmi);
    } else if(bmi >= 30){
        printf("BMI: %.2lf (Obesity)", bmi);
    } else{
        return 1;
    }
    return 0;
}