#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, n;

    printf("N: ");
    scanf("%i", &n);
    
    int vetor[n];
    
    vetor[0] = 0;
    vetor[1] = 1;

    for (i = 2; i < n; i++)
    {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    for (i = 0; i < n; i++)
    {
        printf("Vetor[%i]: %i\n", i, vetor[i]);
    }
    
    
    printf("\n\n");
    system("PAUSE");

}
