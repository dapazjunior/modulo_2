#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                matriz[i][j] == 1;
            } else
            {
                matriz[i][j] == 0;
            }
            
            
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: %i\n", i, j, matriz[i][j]);
        }
    }
    
    printf("\n\n");
    system("PAUSE");

}
