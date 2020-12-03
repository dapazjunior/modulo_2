#include <stdio.h>

int main(){
    float val_dolar, val_real;
    printf("Digite o valor em dolares (U$): ");
    scanf("%f", &val_dolar);

    val_real = val_dolar * 5.13;

    printf("Valor em reais (R$): %0.2f\n\n", val_real);
    system("PAUSE");
}

