#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int lim_inf, lim_sup, multiplos, cont, i;

    printf("Limite inferior: ");
    scanf("%i", &lim_inf);
    printf("Limite superior: ");
    scanf("%i", &lim_sup);

    cont = lim_inf;
    multiplos = 0;

    while (cont < lim_sup)
    {
      for (i = 2; i < cont; i++)
      {
        if (cont % i == 0)
        {
        	multiplos ++;
        }      
        
      }
      if (multiplos == 0)
        {
          printf("%i ", cont);
        }
        
      multiplos = 0;
      cont ++;
    }
    
    
	  printf("\n\n");
    system("PAUSE");

}
