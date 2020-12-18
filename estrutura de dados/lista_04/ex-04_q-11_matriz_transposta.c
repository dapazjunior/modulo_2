#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n;

    printf("N: ");
    scanf("%i", &n);

    int matriz[n][n], m_transp[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%f", matriz[i][j]);

            m_transp[j][i] = matriz[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz[%i][%i]: %i\n", i, j, matriz[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matriz Transposta[%i][%i]: %i\n", i, j, m_transp[i][j]);
        }
    }
    
    printf("\n\n");
    system("PAUSE");

}
