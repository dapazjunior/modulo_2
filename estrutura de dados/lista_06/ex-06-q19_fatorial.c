#include <stdio.h>
#include "JPSLJ-funcoes.h"

int main(){
    int num, fat;
    
    printf("Quantidade um numero: ");
    scanf("%i", &num);

    printf("Fatorial de %i = %i", num, fatorial(num));

    printf("\n\n");
    system("PAUSE");
}
