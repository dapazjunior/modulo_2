#include <stdio.h>
#include <math.h>

int main(){
    float kg, g;

    printf("Digite o valor em 'kg': ");
    scanf("%f", &kg);
    
    g = kg * 1000;

    printf("O valor em 'g' eh %.1f\n\n", g);
    
	system("PAUSE");
}

