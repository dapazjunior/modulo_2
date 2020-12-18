#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, n;

    printf("N: ");
    scanf("%i", &n);
    
    float soma = 0, media, vetor[n];

    for (i = 0; i < n; i++)
    {
        printf("Vetor[%i]: ", i);
        scanf("%f", vetor[i]);

        soma += vetor[i];
    }

    float n = n;

    media = soma / n;

    printf("Soma: %.0f", soma);
    printf("Media: %.1f", media);
    
    
    printf("\n\n");
    system("PAUSE");

}
