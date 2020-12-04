#include <stdio.h>
#include <math.h>

int main(){
    float km, m;

    printf("Digite o valor em km: ");
    scanf("%f", &km);
    
    m = km * 1000;

    printf("O valor em 'm' eh %.1f\n\n", m);
    
	system("PAUSE");
}

