#include <stdio.h>
#include <conio.h>

int main(){
	float preco1, preco2, preco3, menor;

    printf("Digite o primeiro preco: ");
    scanf("%f", &preco1);

    menor = preco1;

    printf("Digite o segundo preco: ");
    scanf("%f", &preco2);

    if (preco2 < menor){ menor = preco2;}

    printf("Digite o terceiro preco: ");
    scanf("%f", &preco3);

    if (preco3 < menor){ menor = preco3;}

    printf("O preco mais barato eh R$ %.2f", menor);


    system("PAUSE");
}
