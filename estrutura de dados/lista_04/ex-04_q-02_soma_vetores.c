#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i, j, vetorA[n], vetorB[n], vetorC[2*n];

    for ( i = 0; i < n; i++)
    {
        printf("VetorA[%i]: ", i);
        scanf("%i",&vetorA[i]);
        vetorC[i] = vetorA[i];
    }

    for ( j = 0; j < n; j++)
    {
        printf("VetorB[%i]: ", j);
        scanf("%i",&vetorB[j]);
        vetorC[i] = vetorB[j];
        i++;
    }
    
    for ( i = 0; i < 2*n; i++)
    {
        printf("VetorC[%i]: %i\n", i, vetorC[i]);
    }
    

    printf("\n\n");
    system("PAUSE");

}

