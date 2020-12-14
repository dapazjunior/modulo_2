#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float n, q, cont, maior, num;

    printf("N: ");
    scanf("%f", &n);
    
    q = sqrt(n);
	num = floor(q);

    maior = pow(num, 2);

    
    printf("Maior quadrado: %.0f", maior);
	
	printf("\n\n");
    system("PAUSE");

}
