#include <stdio.h>

int main(){
    int cont_n;
    float num;

    printf("Digite um numero = ");
    scanf("%f", &num);
    
    cont_n = 0;
    while (num >= 1)
    {
        num = num / 10;
        cont_n += 1;

    }

    system("PAUSE");

}

