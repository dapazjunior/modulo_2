#include <stdio.h>
#include <math.h>

int main(){
    float kg_latao, kg_cobre, kg_zinco;

    printf("Quantidade de latao(kg): ");
    scanf("%f", &kg_latao);

    kg_cobre = 0.7 * kg_latao;
    kg_zinco = 0.3 * kg_latao;


    printf("São necessarios %.1f kg de cobre e %.1f kg de zinco.\n\n", kg_cobre, kg_zinco);
    
	system("PAUSE");
}