#include <stdio.h>
#include <math.h>

int main(){
    int horas, semanas, dias;

    printf("Digite o valor em horas: ");
    scanf("%i", &horas);
    
    semanas = horas / 168;
    dias = (horas % 168) / 24;
    horas = (horas % 168) % 24;

    printf("O valor corresponde a %i semanas, %i dias e %i horas\n\n", semanas, dias, horas);
    
	system("PAUSE");
}

