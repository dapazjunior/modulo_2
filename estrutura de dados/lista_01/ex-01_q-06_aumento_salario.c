#include <stdio.h>

int main(){
    float sal_inicio, sal_final;
    printf("Digite o salario atual: ");
    scanf("%f", &sal_inicio);

    sal_final = sal_inicio * 1.25;

    printf("O novo salario eh R$ %0.2f\n\n", sal_final);
    
	system("PAUSE");
}

