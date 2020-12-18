#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i, vetorA[n], vetorB[n];

    for ( i = 0; i < n; i++)
    {
		printf("VetorA[%i]: ", i);
        scanf("%i",&vetorA[i]);

        if (vetorA[i] % 2 == 0)
        {
            vetorB[i] = 0;
        } else
        {
            vetorB[i] = 1;
        }
        
    }
    printf("\n");
    
    for (i = 0; i < n; i++)
    {
        printf("VetorB[%i]: %i\n", i, vetorB[i]);
    }
    
    

    printf("\n\n");
    system("PAUSE");

}
