#include <stdio.h>
#include <math.h>

int main(){
    int valor_saque, cem, cinquenta, vinte, dez, cinco, dois, resto;

    printf("Valor a ser sacado (R$): ");
    scanf("%i", &valor_saque);

    cem = valor_saque / 100;
    resto = valor_saque % 100;

    cinquenta = resto / 50;
    resto = resto % 50;

    vinte = resto / 20;
    resto = resto % 20;

    dez = resto / 10;
    resto = resto % 10;

    cinco = resto / 5;
    resto = resto % 5;

    dois = resto / 2;
    resto = resto % 2;

    valor_saque = valor_saque - resto;

    printf("Voce podera sacar R$ %.2i\n", valor_saque);
    printf("SAQUE:\n");
    printf("%i x R$ 100,00\n", cem);
    printf("%i x R$ 50,00\n", cinquenta);
    printf("%i x R$ 20,00\n", vinte);
    printf("%i x R$ 10,00\n", dez);
    printf("%i x R$ 5,00\n", cinco);
    printf("%i x R$ 2,00\n\n", dois);
    
	system("PAUSE");
}