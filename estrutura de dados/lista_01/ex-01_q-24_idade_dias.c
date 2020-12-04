#include <stdio.h>
#include <math.h>

int main(){
    int anos, meses, dias;

    printf("Digite a idade em anos, meses e dias na ordem solicitada.\n");
    printf("Anos: ");
    scanf("%i", &anos);

    printf("Meses: ");
    scanf("%i", &meses);

    printf("Dias: ");
    scanf("%i", &dias);
    
    dias = anos * 365 + meses * 30 + dias;

    printf("A idade eh %i dias.\n\n", dias);
    
	system("PAUSE");
}

