#include <stdio.h>

int main(){
    int num1, num2, mmc;

    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);

    mmc = num1;

    if (num2 > num1)
    {
        mmc = num2;
    }

    while (!(mmc % num1 == 0 && mmc % num2 == 0))
    {
        mmc += 1;
    }

    printf("O mmc de %i e %i eh %i\n\n", num1, num2, mmc); 
    

    system("PAUSE");

}

