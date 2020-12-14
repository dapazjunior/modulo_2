#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float n, q, soma;

    printf("N: ");
    scanf("%f", &n);
    
    soma = 0;

    for (q = 1; q <= n; q++)
    {
        soma += q;
        printf("%.0f ", soma);
    }
	
	printf("\n\n");
    system("PAUSE");

}
