#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float n, cont, soma, num, media;

    printf("N: ");
    scanf("%f", &n);
    
    soma = 0;
    cont = 1;

    while (cont <= n)
    {
      printf("Numero %.0f: ", cont);
      scanf("%f", &num);

      soma += num;
      cont ++;
    }

    media = soma / n;
    
    
    printf("%.1f", media);
	
	printf("\n\n");
    system("PAUSE");

}
