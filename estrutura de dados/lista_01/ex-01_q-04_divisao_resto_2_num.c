#include <stdio.h>

int main(){
    int num1, num2, divisao, resto;
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("\n");

    divisao = num1 / num2;
    resto = num1 % num2;

    printf("Divisao de %i por %i: %i\n", num1, num2, divisao);
    printf("Resto de %i por %i: %i\n\n", num1, num2, resto);
    
	system("PAUSE");
}

