#include <stdio.h>

int main(){
    float pi, raio, area;

    printf("Digite a mediada do raio da circunferencia: ");
    scanf("%f", &raio);
    pi = 3.14;
    
    area =  pi * raio * raio;

    printf("A area da circunferencia eh %.1f\n\n", area);
    
	system("PAUSE");
}
