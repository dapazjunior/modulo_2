#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num, fatorial;
    
    printf("Numero: ");
    scanf("%i", &num);

    fatorial = num;
    
    while (num > 1)
    {
        fatorial = fatorial * (num - 1);
        num -= 1;
    }

    printf("Fatorial = %i", fatorial);
    

    printf("\n\n");
    system("PAUSE");

}
