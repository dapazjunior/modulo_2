#include <stdio.h>

int main(){
    float num1, num2, maior, menor;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    maior = num1;
    menor = num1;

    if (num1 == num2){
        printf("Os numeros sao iguais.");
    } else{
    if(num2 > maior) {
        maior = num2;
    }
    
    if(num2 < menor) {
        menor = num2;
    }
    }
    printf("Maior = %0.1f\n", maior);
    printf("Menor = %0.1f\n\n", menor);

    system("PAUSE");

}

