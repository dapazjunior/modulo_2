#include <stdio.h>
#include <math.h>

int main(){
    float custo_fabrica, distribuidor, impostos, total;

    printf("Custo de fabrica(R$): ");
    scanf("%f", &custo_fabrica);

    distribuidor = custo_fabrica *.28;
    impostos = custo_fabrica * .45;
    total = custo_fabrica + distribuidor + impostos;


    printf("O valor do carro eh R$ %.2f.\n\n", total);
    
	system("PAUSE");
}

