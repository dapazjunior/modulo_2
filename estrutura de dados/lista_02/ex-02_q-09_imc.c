#include <stdio.h>

int main(){
    float altura, peso, imc;
    printf("Digite a altura em 'm': ");
    scanf("%f", &altura);
    printf("Digite o peso em 'kg': ");
    scanf("%f", &peso);

    imc = peso/(altura * altura);

    if (imc < 25)
    {
        printf("PESO NORMAL");
    }
    else if (imc >= 25 && imc <= 30)
    {
        printf("OBESO");
    }
    else if (imc > 30)
    {
        printf("OBESIDADE MORBIDA");
    }

    system("PAUSE");
}
