#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i, j, cont_int = 0, cont_uni = 0, vetorA[n], vetorB[n], vetor_int[cont_int], vetor_uni[cont_uni];

    for ( i = 0; i < n; i++)
    {
        printf("VetorA[%i]: ", i);
        scanf("%i",&vetorA[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("VetorB[%i]: ", i);
        scanf("%i",&vetorB[i]);
    }

    //Intercessao

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vetorA[i] == vetorB[j])
            {
                vetor_int[cont_int] = vetorA[i];
                cont_int++;
            }

        }
           
    }

    for (i = 0; i < cont_int; i++)
    {
        printf("Vetor_intercessao[%i]: %i\n", i, vetor_int[i]);
    }

    //Uniao
    
    

    printf("\n\n");
    system("PAUSE");

}

