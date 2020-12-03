#include <stdio.h>

int main(){
    int num1, num2, centena, dezena, unidade;
    printf("Digite um numero inteiro de 3 algarismos: ");
    scanf("%i", &num1);

    centena = num1 / 100;
    dezena = (num1 % 100) / 10;
    unidade = (num1 % 100) % 10;
    num2 = unidade * 100 + dezena * 10 + centena;

    printf("O inverso de %i eh %i\n\n", num1, num2);
    
	system("PAUSE");
}

