#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n, cont, soma;

    printf("N: ");
    scanf("%i", &n);
    
    soma = 0;
    
    for (cont = 1; cont <= n; cont++)
    {
		soma += cont;
    }
    
    printf("%i", soma);
	
	printf("\n\n");
    system("PAUSE");

}
