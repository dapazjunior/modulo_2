#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float n, cont, maior, num;

    printf("N: ");
    scanf("%f", &n);
    
    maior = -99999999999999999;
    cont = 1;

    while (cont <= n)
    {
      printf("Numero %.0f: ", cont);
      scanf("%f", &num);

      if (num > maior)
      {
        maior = num;
      }
      
      cont ++;
    }
    
    
    printf("Maior: %.1f", maior);
	
	printf("\n\n");
    system("PAUSE");

}
