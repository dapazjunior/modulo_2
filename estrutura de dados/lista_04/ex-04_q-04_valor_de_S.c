#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n = 20, cont_int = 0, cont_uni = 0, vetor[n], soma = 0;

    for ( i = 0; i < n; i++)
    {
        printf("Vetor[%i]: ", i);
        scanf("%i",&vetor[i]);
    }

    for ( i = 0; i < n; i++)
    {
        j = n - i - 1;
        soma += pow((vetor[i] - vetor[j]), 2);
    }

    printf("Valor de S: %i", soma);
    

    printf("\n\n");
    system("PAUSE");

}
