#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n = 8, dec = 0, hexadec, cont_int = 0, cont_uni = 0, vetor[n], soma = 0;

    for ( i = 0; i < n; i++)
    {
        printf("Digito[%i]: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    //Decimal

    for (j = 0; j < n ; j++)
    {
        dec += vetor[j] * pow(2, (n - j - 1));
    }
    
    printf("Decimal: %i", dec);

    //Hexadecimal
    

    printf("\n\n");
    system("PAUSE");

}
