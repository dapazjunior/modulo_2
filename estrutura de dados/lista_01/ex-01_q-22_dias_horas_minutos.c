#include <stdio.h>
#include <math.h>

int main(){
    int minutos, dias, horas;

    printf("Digite o valor em minutos: ");
    scanf("%i", &minutos);
    
    dias = minutos / 1440;
    horas = (minutos % 1440) / 60;
    minutos = (minutos % 1440) % 60;

    printf("O valor corresponde a %i dias, %i horas e %i minutos\n\n", dias, horas, minutos);
    
	system("PAUSE");
}

