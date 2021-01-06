#include <stdio.h>
#include "JPSLJ-funcoes.h"

int main(){
    int n;
    
    printf("Quantidade de termos da sequencia: ");
    scanf("%i", &n);

    fibonacci(n);

    printf("\n\n");
    system("PAUSE");
}
