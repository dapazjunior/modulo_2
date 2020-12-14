#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float nota, qtd_otimo, qtd_bom, qtd_regular, qtd_total, idade;
    float media_otimo, idade_otimo, percentual_bom;

    printf("Idade: ");
    scanf("%f", &idade);

    while (idade != -1)
    {
        printf("Digite sua nota(1-4): ");
        scanf("%f", &nota);

        if (nota == 1)
        {
            idade_otimo += idade;
            qtd_otimo += 1;
        } else if (nota == 2)
        {
            qtd_bom += 1;
        } else if (nota == 3)
        {
            qtd_regular += 1;
        }

        qtd_total += 1;

        printf("\nIdade: ");
        scanf("%f", &idade);
    }

    media_otimo = idade_otimo / qtd_otimo;
    percentual_bom = qtd_bom / qtd_total * 100;

    printf("Media das idades dos que acharam otimo: %.1f", media_otimo);
    printf("Quantidade dos que acharam regular: %.0f", qtd_regular);
    printf("Percentual dos que acharam bom: %.1f", percentual_bom);
    
    system("PAUSE");

}
