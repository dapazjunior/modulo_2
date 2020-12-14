#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int ponto, pontos_1, pontos_2;
    bool condicao;

    pontos_1 = 0;
    pontos_2 = 0;
    condicao = false;

    while (!condicao)
    {
       if (condicao)
       {
           break;
       }

       printf("Ponto para 1 ou 2? ");
       scanf("%i", &ponto);

        if (ponto == 1)
        {
            pontos_1 += 1;
        }

        if (ponto == 2)
        {
            pontos_2 += 1;
        }
            
        printf("Placar: %i x %i\n", pontos_1, pontos_2);
        
        condicao = ((pontos_1 >= 21) || (pontos_2 >= 21)) && ((pontos_1 - pontos_2 >= 2) || (pontos_2 - pontos_1 >= 2));
       
    }

    if (pontos_1 > pontos_2)
    {
        printf("O jogador 1 venceu por %i x %i\n\n", pontos_1, pontos_2);
    }
    
    if (pontos_2 > pontos_1)
    {
        printf("O jogador 2 venceu por %i x %i\n\n", pontos_2, pontos_1);
    }

    system("PAUSE");

}
