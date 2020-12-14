#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float votos1, votos2, votos3, votos_n, votos_b, voto, n, cont, votos_val, maior;
    char vencedor, c1[12] = "Candidato 1", c2[12] = "Candidato 2", c3[12] = "Candidato 3";

    printf("Numero de votantes: ");
    scanf("%f", &n);

    cont = 0;
    
    while (cont < n)
    {
        printf("\nDigite seu voto: ");
        scanf("%f", &voto);

        if (voto == 1)
        {
            votos1 += 1;
            votos_val += 1;
        } else if (voto == 2)
        {
            votos2 += 1;
            votos_val += 1;
        } else if (voto == 3)
        {
            votos3 += 1;
            votos_val += 1;
        } else if (voto == 0)
        {
            votos_b += 1;
        } else
        {
            votos_n += 1;
        }

        cont += 1;
        
    }

    printf("Candidato 1: %.0f votos\n", votos1);
    printf("Candidato 2: %.0f votos\n", votos2);
    printf("Candidato 3: %.0f votos\n", votos3);
    printf("Brancos: %.0f votos\n", votos_b);
    printf("Nulos: %.0f votos\n", votos_n);

    maior = votos1;
    vencedor = c1;

    if (votos2 > maior)
    {
        maior = votos2;
        vencedor = c2;
    }

    if (votos3 > maior)
    {
        maior = votos3;
        vencedor = c3;
    }

    printf("O vencedor foi: %s", vencedor);    
    
    
    printf("\n\n");
    system("PAUSE"); 

}
