#include <stdio.h>
#include <math.h>

int main(){
    float valor, prestacao, entrada;

    printf("Valor do produto (R$): ");
    scanf("%f", &valor);

    prestacao = floor(valor / 3);
    entrada = valor - 2 * prestacao;

    printf("O pagamento sera uma entrada de R$ %.2f e mais duas prestacoes de R$ %.2f.\n\n", entrada, prestacao);

	system("PAUSE");
}