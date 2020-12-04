#include <stdio.h>
#include <math.h>

int main(){
    float pi, raio, volume;

    printf("Digite a mediada do raio da esfera: ");
    scanf("%f", &raio);
    pi = 3.14;
    
    volume =  (4 * pi * powf(raio, 3)) / 3;

    printf("A area da esfera eh %.1f\n\n", volume);
    
	system("PAUSE");
}

