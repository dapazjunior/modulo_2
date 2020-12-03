#include <stdio.h>

int main(){
    float lado, area;
    
    printf("Digite a mediada do lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;

    printf("A area do quadrado eh %.1f\n\n", area);
    
	system("PAUSE");
}

