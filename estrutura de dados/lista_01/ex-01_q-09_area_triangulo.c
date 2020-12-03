#include <stdio.h>

int main(){
    float base, altura, area;
    
    printf("Digite a mediada da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a mediada da altura do triangulo: ");
    scanf("%f", &altura);
    
    area = base * altura / 2;

    printf("A area do triangulo eh %.1f\n\n", area);
    
	system("PAUSE");
}

