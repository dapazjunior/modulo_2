#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n0, n1, n, soma, qtd;

    printf("N: ");
    scanf("%i", &n);
    
    printf("0 1 ");

    n0 = 0;
    n1 = 1;
    qtd = 2;

    while (qtd < n)
    {
        soma = n0 + n1;
        printf("%i ", soma);
        n0 = n1;
        n1 = soma;
        qtd += 1;

    }

    printf("\n\n");
    system("PAUSE"); 

}
