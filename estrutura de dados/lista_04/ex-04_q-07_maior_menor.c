#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i, vetor[n], maior = -9999999999999, pos_maior = 0, menor = 9999999999999, pos_menor = 0;

    for ( i = 0; i < n; i++)
    {
		printf("Vetor[%i]: ", i);
        scanf("%i", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
            pos_maior = i;
        }
        
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            pos_menor = i;
        }
        
    }

    printf("Maior: %i\n", maior);
    printf("Posicao do Maior: %i\n", pos_maior);
    printf("Menor: %i\n", menor);
    printf("Posicao do Menor: %i", pos_menor);
    
   
    printf("\n\n");
    system("PAUSE");

}
