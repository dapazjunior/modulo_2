#include <stdio.h>

int main(){
    int dia, mes, ano, dia_hj, mes_hj, ano_hj, idade;
    printf("Digite a data de nascimento: ");
    scanf("%i %i %i", &dia, &mes, &ano);

    printf("Digite a data de hoje: ");
    scanf("%i %i %i", &dia_hj, &mes_hj, &ano_hj);

    idade = ano_hj - ano - 1;
    if (mes_hj > mes){idade = idade + 1;} else{
    if (mes_hj == mes){if (dia_hj >= dia){idade = idade + 1;}}
        }
    printf("Sua idade eh %i anos.\n\n", idade);

    system("PAUSE");

}