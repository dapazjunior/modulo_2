#include <stdio.h>
#include <math.h>

int main(){
    float temp_c, temp_f;

    printf("Digite o valor da temperatura em Celcius: ");
    scanf("%f", &temp_c);
    
    temp_f = (9 * temp_c + 160) / 5;

    printf("A temperatura em Farenheit eh %.1f\n\n", temp_f);
    
	system("PAUSE");
}

