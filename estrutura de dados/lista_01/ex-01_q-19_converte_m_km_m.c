#include <stdio.h>
#include <math.h>

int main(){
    int m, km;

    printf("Digite o valor em 'm': ");
    scanf("%i", &m);
    
    km = m / 1000;
    m = m % 1000;

    printf("O valor corresponde a %i km e %i m\n\n", km, m);
    
	system("PAUSE");
}

