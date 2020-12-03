#include <stdio.h>

int main(){
    float vel_ms, vel_kmh;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &vel_kmh);

    vel_ms = vel_kmh / 3.6;

    printf("Velocidade em m/s: %0.1f m/s\n\n", vel_ms);
    
	system("PAUSE");
}

