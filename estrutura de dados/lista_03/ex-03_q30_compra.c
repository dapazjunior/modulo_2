#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float preco_unit, preco_total, desconto, qtde;
    char produto;

    printf("PRODUTO: ");
    scanf("%c", &produto);

    while (produto != "FIM")
    {
        printf("Preco unitário: R$ ");
        scanf("%f", &preco_unit);
        printf("Quantidade: ");
        scanf("%f", &qtde);

        if (qtde < 10)
        {
            desconto = 0;
        } else if (qtde < 20)
        {
            desconto = .1;
        } else if (qtde < 50)
        {
            desconto = .2;
        } else
        {
            desconto = .25;
        }
        
        preco_total = preco_unit * qtde * (1 - desconto);
        printf("\nPRODUTO\n>> %c\nVALOR:\n>> R$ %.2f\n\n", produto, preco_total);

        printf("PRODUTO: ");
        scanf("%c", &produto);     
    }
    
    system("PAUSE");

}
