#include <stdio.h>
#include <math.h>

int main(){
    float temp_c, temp_f;

    printf("Digite o valor da temperatura em Farenheit: ");
    scanf("%f", &temp_f);
    
    temp_c = (5 * temp_f - 160) / 9;

    printf("A temperatura em Celcius eh %.1f\n\n", temp_c);
    
	system("PAUSE");
}

