#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float inv_mensal, tx_juros, capital_acumulado, mes;
    char continuar;

    printf("Investimento mensal:\n>>> R$ ");
    scanf("%f", &inv_mensal);
    printf("Taxa de juros mensal\n>>> ");
    scanf("%f", &tx_juros);
    
    continuar = "S";

    while (continuar == "S")
    {
        capital_acumulado = (capital_acumulado) * (1 + tx_juros / 100) + inv_mensal;
        mes += 1;

        if (mes == 12)
        {
            printf("Capital acumulado até agora: R$ %.2f", capital_acumulado);
            printf("Deseja processar mais um ano (S/N)?\n>>> ");
            scanf("%c", continuar);

            if (continuar == "S")
            {
                mes = 0;
            }
        }
    }

    printf("Capital acumulado final: R$ %.2f", capital_acumulado);
    

    system("PAUSE");

}
