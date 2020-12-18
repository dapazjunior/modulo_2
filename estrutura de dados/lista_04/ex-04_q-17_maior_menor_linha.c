#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n;
    int maior=-9999999999999, i_maior, menor=999999999999999, i_menor;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n];


    for (i = 0; i < n; i++)
    {
        int soma_linha = 0;

        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);

            soma_linha += matriz[i][j];
        }

        if (soma_linha > maior)
        {
            maior = soma_linha;
            i_maior = i;
        }

        if (soma_linha < menor)
        {
            menor = soma_linha;
            i_menor = i;
        }

    }

    printf("Maior linha: %i\n", i_maior);
    printf("Soma da maior linha: %i\n", maior);
    printf("Menor linha: %i\n", i_menor);
    printf("Soma da menor linha: %i\n", menor);

    printf("\n\n");
    system("PAUSE");

}
