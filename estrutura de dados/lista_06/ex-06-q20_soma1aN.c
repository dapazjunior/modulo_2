#include <stdio.h>
#include "JPSLJ-funcoes.h"

int main(){
    int num, soma;
    
    printf("Quantidade um numero: ");
    scanf("%i", &num);

    soma = soma1aN(num);

    printf("Soma de 1 a %i = %i", num, soma);

    printf("\n\n");
    system("PAUSE");
}
