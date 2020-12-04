#include <stdio.h>
#include <math.h>

int main(){
    int anos, cig_dia, qtd_cart;
    float val_carteira, cig_total, gasto;

    printf("Tempo (em anos) que fuma: ");
    scanf("%i", &anos);

    printf("Cigarros fumados por dia: ");
    scanf("%i", &cig_dia);

    printf("Valor da carteira: ");
    scanf("%f", &val_carteira);

    cig_total = anos * 365 * cig_dia;
    qtd_cart = ceil(cig_total / 20);
    gasto = qtd_cart * val_carteira;


    printf("O custo total de cigarros eh R$ %.2f.\n\n", gasto);
    
	system("PAUSE");
}

