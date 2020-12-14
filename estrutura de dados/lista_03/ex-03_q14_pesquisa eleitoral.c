#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    float votos_dilma, votos_serra, votos_ciro, indecisos, outros, branco, entrevistados;
    int voto;

    entrevistados = 0;
    votos_ciro = 0;
    votos_dilma = 0;
    votos_serra = 0;
    indecisos = 0;
    outros = 0;
    branco = 0;

    printf("Intencao de voto: ");
    scanf("%i", &voto);

    while (voto != -1)
    {
        if (voto == 13)
        {
            votos_dilma += 1;
        } else if (voto == 45)
        {
            votos_serra += 1;
        } else if (voto == 23)
        {
            votos_ciro += 1;
        } else if (voto == 99)
        {
            indecisos += 1;
        } else if (voto == 98)
        {
            outros += 1;
        } else
        {
            branco += 1;
        }

        entrevistados += 1;

        printf("Intencao de voto: ");
        scanf("%i", &voto);
    }

    votos_dilma = votos_dilma / entrevistados * 100;
    votos_ciro = votos_ciro / entrevistados * 100;
    votos_serra = votos_serra / entrevistados * 100;
    indecisos = indecisos / entrevistados * 100;
    outros = outros / entrevistados * 100;
    branco = branco / entrevistados * 100;

    printf("> > > RESULTADO < < <\n");
    printf("(em percentual)\n");
    printf("Dilma: %.1f\n", votos_dilma);
    printf("Serra: %.1f\n", votos_serra);
    printf("Ciro: %.1f\n", votos_ciro);
    printf("Outros: %.1f\n", outros);
    printf("Indecisos: %.1f\n", indecisos);
    printf("Brancos/Nulos: %.1f\n\n", branco);    
    
    system("PAUSE");

}
