#include <stdio.h>
#include <conio.h>

int main(){
	float nota1, nota2, media;
    char conceito;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 4){
        conceito = "E";
    }
    if (media >= 4 && media < 6){
        conceito = "D";
    }
    if (media >= 6 && media < 8){
        conceito = "C";
    }
    if (media >= 8 && media < 9){
        conceito = "B";
    }
    if (media >= 9 && media <= 10 ){
        conceito = "A";
    }

    if (conceito == "E" || conceito == "D"){
        printf("REPROVADO");
    } else
    {
        printf("APROVADO");
    }

    system("PAUSE");
}
