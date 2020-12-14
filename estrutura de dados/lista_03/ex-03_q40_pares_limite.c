#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int lim_inf, lim_sup, cont;

    printf("Limite inferior: ");
    scanf("%i", &lim_inf);
    printf("Limite superior: ");
    scanf("%i", &lim_sup);
    
    for (cont = lim_inf; cont <= lim_sup; cont++)
    {
      if (cont % 2 == 0)
      {
        printf("%i ", cont);
      }
    }
    
	  printf("\n\n");
    system("PAUSE");

}
