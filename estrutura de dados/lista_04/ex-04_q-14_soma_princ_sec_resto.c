#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n, soma_princ = 0, soma_sec = 0, soma_resto = 0, sec_j = n - 1;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n];


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);

            if (i == j)
            {
                soma_princ += matriz[i][j];
            }

            if (sec_j == j)
            {
                soma_sec += matriz[i][j];
            }

            if (i != j && sec_j != j)
            {
                soma_resto += matriz[i][j];
            }
            
            
        }
        sec_j --;
    }
    
    
    
    printf("\n\n");
    system("PAUSE");

}
