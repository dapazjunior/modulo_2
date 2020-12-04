#include <stdio.h>
#include <math.h>

int main(){
    float m, cm;

    printf("Digite o valor em 'm': ");
    scanf("%f", &m);
    
    cm = m * 100;

    printf("O valor em 'cm' eh %.1f\n\n", cm);
    
	system("PAUSE");
}

