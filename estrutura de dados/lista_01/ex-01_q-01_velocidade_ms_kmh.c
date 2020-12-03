#include <stdio.h>

int main(){
    float vel_ms, vel_kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &vel_ms);

    vel_kmh = vel_ms * 3.6;

    printf("Velocidade em km/h: %0.1f km/h\n\n", vel_kmh);

    system("PAUSE");

}

