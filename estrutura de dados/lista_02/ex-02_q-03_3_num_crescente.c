#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    if (num1 > num2 && num2 > num3){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num3, num2, num1);}
    
    if (num1 > num3 && num3 > num2){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num2, num3, num1);}

    if (num2 > num3 && num3 > num1){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num1, num3, num2);}

    if (num2 > num1 && num1 > num3){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num3, num1, num2);}

    if (num3 > num2 && num2 > num1){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num1, num2, num3);}
    
    if (num2 > num1 && num1 > num3){
        printf("Ordem crescente = %.1f, %.1f, %.1f\n\n", num2, num1, num3);}

    system("PAUSE");

}

