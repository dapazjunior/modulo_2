#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    float soma_atual, soma_aumentado, salario, novo_salario, aumento, diferenca;

    soma_atual = 0;
    soma_aumentado = 0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    while (salario != 0)
    {
        if (salario > 0 && salario < 3000){
            aumento = 0.25;
        } else if (salario < 6000)
        {
            aumento = 0.2;
        } else if (salario < 10000)
        {
            aumento = 0.15;
        } else
        {
            aumento = 0.1;
        }
        
        novo_salario = salario * (1 + aumento);
        soma_atual += salario;
        soma_aumentado += novo_salario;
        diferenca = soma_aumentado - soma_atual;
    }

    printf("A soma dos salarios atuais eh: R$ %.2f", soma_atual);
    printf("A soma dos salarios aumentados eh: R$ %.2f", soma_aumentado);
    printf("O aumento total eh: R$ %.2f", diferenca);    

    system("PAUSE");

}
