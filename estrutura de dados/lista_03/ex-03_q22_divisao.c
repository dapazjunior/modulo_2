#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num1, num2, resto, quociente;

    printf("Numero: ");
    scanf("%i", &num1);
    printf("Numero: ");
    scanf("%i", &num2);

    quociente = 0;

    if (num2 == 0)
    {
        printf("O denominador nao pode ser zero!");
    } else
    {
        while (num1 > num2)
        {
            num1 -= num2;
            quociente += 1;
        }

        resto = num1;
        
    }

    printf("Quociente = %i\nResto = %i\n\n", quociente, resto);

    system("PAUSE");

}
