#include <stdio.h>
#include "JPSLJ-funcoes.h"

int main(){
    double num1, num2, calcMdc;

    printf("Numero 1: ");
	scanf("%d", &num1);

    printf("Numero 2: ");
	scanf("%d", &num2);

    calcMdc = mdc(num1, num2);
    printf("MDC = %d", calcMdc);

    printf("\n\n");
    system("PAUSE");
}
