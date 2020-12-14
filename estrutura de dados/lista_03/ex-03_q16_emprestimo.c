#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float emprestimo, pag_diario;
    int dia_pag, dias_uteis;

    printf("Valor do empréstimo: ");
    scanf("%f", &emprestimo);

    printf("Pagamento diário (dias úteis): ");
    scanf("%f", &pag_diario);

    printf("Qual o dia do início do pagamento?\nDom - 1\nSeg - 2\nTer - 3\nQua - 4\nQui - 5\nSex - 6\nSáb - 7\n>>> ");
    scanf("%i", &dia_pag);

    while (emprestimo > 0)
    {
        if ((dia_pag % 7) <= 5)
        {
            emprestimo -= pag_diario;
            dias_uteis += 1;
        }

        emprestimo += emprestimo * 0.0085;
        dia_pag += 1;        
    }
    printf("São necessários %i dias úteis para finalizar o pagamento.", dias_uteis);
     
    system("PAUSE");

}
