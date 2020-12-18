#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n, soma_pos = 0, soma_neg = 0;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);

            if (matriz[i][j] > 0)
            {
                soma_pos += matriz[i][j];
            }

            if (matriz[i][j] < 0)
            {
                soma_neg -= matriz[i][j];
            }
                  
        }
    }

    printf("Soma dos positivos: %i\n", soma_pos);
    printf("Soma dos negativos: %i", soma_neg);

    
    printf("\n\n");
    system("PAUSE");

}
