#include <stdio.h>

int main(){
    int num, i;
    
    do
    {
       printf("Digite um numero: ");
       scanf("%i", &num);

       if (num != 0)
       {
           for (i = 1; i < num; i++)
           {
               if (num % i == 0)
               {
                   printf("%i, ", i);
               }
               
           }
           printf("%i\n\n", num);
           
       }
       
    } while (num != 0);
    


        

    system("PAUSE");

}

