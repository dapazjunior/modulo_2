#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n;
    int maior=-9999999999999, i_maior, j_maior, menor=999999999999999, i_menor, j_menor;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n];


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);

            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                i_maior = i;
                j_maior = j;
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                i_menor = i;
                j_menor = j;
            }
            
        }
    }

    printf("Maior: %i\n", maior);
    printf("Posicao do maior: Matriz[%i][%i]\n", i_maior, j_maior);
    printf("Menor: %i\n", menor);
    printf("Posicao do menor: Matriz[%i][%i]\n", i_menor, j_menor);
    
    
    printf("\n\n");
    system("PAUSE");

}
