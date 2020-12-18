#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i, j, vetorA[n], vetorB[n];

    for ( i = 0; i < n; i++)
    {
        j = n - i - 1;
		scanf("%i",&vetorA[i]);
        vetorB[j] = vetorA[i];
    }
    
    for ( i = 0; i < n; i++)
    {
    printf("Vetor A[%i]: %i\n", i, vetorA[i]);
    }
    
    printf("\n");
    for ( i = 0; i < n; i++)
    {
    printf("Vetor B[%i]: %i\n", i, vetorB[i]);
    }
    

    printf("\n\n");
    system("PAUSE");

}

