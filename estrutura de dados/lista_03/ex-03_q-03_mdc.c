#include <stdio.h>

int main(){
    int num1, num2, mdc;

    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);

    mdc = num1;

    if (num2 < num1)
    {
        mdc = num2;
    }

    while (!(num1 % mdc == 0 && num2 % mdc == 0))
    {
        mdc -= 1;
    }

    printf("O mmc de %i e %i eh %i\n\n", num1, num2, mdc); 
    

    system("PAUSE");

}

