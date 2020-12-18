#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n, verifica = 1;

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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                verifica = 0;
                break;
            }
                 
        }

    }

    if (verifica == 1)
    {
        printf("Eh simetrica!");
    } else
    {
        printf("Nao eh simetrica!");
    }    
    
    printf("\n\n");
    system("PAUSE");

}
