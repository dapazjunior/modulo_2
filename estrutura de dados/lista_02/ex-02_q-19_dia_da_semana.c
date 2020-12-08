#include <stdio.h>
#include <conio.h>

int main(){
	int dia;

    printf("Digite um numero de dia da semana(1 a 7): ");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    
    case 2:
        printf("Segunda-feira");
        break;
    
    case 3:
        printf("Terca-feira");
        break;

    case 4:
        printf("Quarta");
        break;
    
    case 5:
        printf("Quinta-feira");
        break;
    
    case 6:
        printf("Sexta-feira");
        break;
    
    case 7:
        printf("Sabado");
        break;
    
    default:
        printf("Dia inválido!");
        break;
    }

    system("PAUSE");
}
