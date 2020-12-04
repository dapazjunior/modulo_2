#include <stdio.h>
#include <math.h>

int main(){
    int meses, anos;

    printf("Digite o valor em meses: ");
    scanf("%i", &meses);
    
    anos = meses / 12;
    meses = meses % 12;

    printf("O valor corresponde a %i anos e %i meses\n\n", anos, meses);
    
	system("PAUSE");
}

