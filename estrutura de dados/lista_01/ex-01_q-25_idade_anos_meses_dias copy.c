#include <stdio.h>
#include <math.h>

int main(){
    int anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%i", &dias);

    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias = (dias % 365) % 30;

    printf("A idade eh %i anos, %i meses e %i dias.\n\n", anos, meses, dias);
    
	system("PAUSE");
}

