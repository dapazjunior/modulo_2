#include<stdio.h>
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
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);
        }
    }

    for (j = 0; j < n; j++)
    {
        int soma_coluna = 0;

        for (i = 0; i < n; i++)
        {
            soma_coluna += matriz[i][j];
        }

        if (soma_coluna > maior)
            {
            maior = soma_coluna;
            i_maior = i;
            }

            if (soma_coluna < menor)
            {
            menor = soma_coluna;
            i_menor = i;
            }
        
    }

    printf("Maior coluna: %i\n", i_maior);
    printf("Soma da maior coluna: %i\n", maior);
    printf("Menor coluna: %i\n", i_menor);
    printf("Soma da menor coluna: %i\n", menor);

    printf("\n\n");
    system("PAUSE");

}
