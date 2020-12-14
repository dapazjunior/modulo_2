#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num1, num2, soma;

    printf("Numero: ");
    scanf("%i", &num1);
    printf("Numero: ");
    scanf("%i", &num2);

    soma = 0;

    if (num1 == 0 || num2 == 0)
    {
        soma = 0;
    } else
    {
        while (num1 > 0)
        {
            soma += num2;
            num1 -= 1;
        }
    }

    printf("Resultado da multiplicacao = %i\n\n", soma);

    system("PAUSE");

}
