#include <stdio.h>

int main(){
    float valor, percent_valor;
    printf("Digite um valor em reais (R$): ");
    scanf("%f", &valor);

    percent_valor = valor * 0.7;

    printf("O valor R$ %0.2f corresponde a 70 por cento de R$ %0.2f\n\n", percent_valor, valor);
    
	system("PAUSE");
}

