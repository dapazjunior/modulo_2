#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float dist_total, comb_total, dist_trecho, comb_trecho, comb_restante;
    
    dist_total = 0;
    comb_total = 0;

    while (dist_total < 600 && comb_total < 50)
    {
        printf("Distancia percorrida desde a ultima medicao: ");
        scanf("%f", dist_trecho);
        printf("Combustivel consumido no trecho: ");
        scanf("%f", comb_trecho);

        dist_total += dist_trecho;
        comb_total += comb_trecho;
    }

    comb_restante = 50 - comb_total;

    if (dist_total >= 600)
    {
        printf("O carro chegou ao seu destino e ainda restam %.1f litros de combustivel.\n\n");
    } else
    {
        printf("O combustivel acabou antes do destino!");
    }
    
    
    

    system("PAUSE");

}
