#include <stdio.h>

int main(){
    int num1, num2, soma, diferenca, divisao, resto, produto, opcao;
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    
    printf("Digite a operacao a ser realizada:\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOpcao >>> ");
    scanf("%i", &opcao);

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    divisao = num1 / num2;
    resto = num1 % num2;

    switch (opcao)
    {
    case 1:
        printf("Resultado da soma: %i\n\n", soma);
        break;
    
	case 2:
        printf("Resultado da subtracao: %i\n\n", diferenca);
        break;
    
	case 3:
        printf("Resultado da multiplicacao: %i\n\n", produto);
        break; 
    
	case 4:
        printf("Resultado da divisao: %i\n", divisao);
        printf("Resto da divisao: %i\n\n", resto);
        break;
    
	default:
        printf("Opcao invalida!\n\n");
        break;
    }

    system("PAUSE");

}
