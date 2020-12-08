#include <stdio.h>
#include <conio.h>

int main(){
	char turno;

    printf("Digite o turno(M, V, N): ");
    scanf("%c", &turno);

    switch (turno)
    {
    case 'M':
        printf("Bom dia!");
        break;
    
    case 'V':
        printf("Boa tarde!");
    
    case 'N':
        printf("Boa noite!");
    
    default:
        printf("Turno inválido!");
        break;
    }

    system("PAUSE");
}
