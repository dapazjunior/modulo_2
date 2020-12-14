#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float sexo, idade, estado_civil;
    float qtd_pessoas, qtd_homens, qtd_mulheres, soma_idade_h, soma_idade_m;
    float mulher_solt, homem_solt, mulher_div_30, media_id_h, media_id_m;
    float percent_h_solt, percent_m_solt;

    qtd_pessoas = 0;
    qtd_homens = 0;
    qtd_mulheres = 0;
    soma_idade_h = 0;
    soma_idade_m = 0;
    homem_solt = 0;
    mulher_solt = 0;
    mulher_div_30 = 0;
    
    while (qtd_pessoas < 100)
    {
        printf("Pessoa %.0f",(qtd_pessoas + 1));
        printf("\nSEXO\n1 - Masculino\n2 - Feminino\n>>> ");
        scanf("%f", sexo);
        printf("IDADE\n>>> ");
        scanf("%f", idade);
        printf("ESTADO CIVIL\n1 - Casado\n2 - Solteiro\n3 - Divorciado\n4 - Viúvo\n>>> ");
        scanf("%f", estado_civil);

        if (sexo == 1)
        {
            qtd_homens += 1;
            soma_idade_h += idade;
            if (estado_civil == 2)
            {
                homem_solt += 1;
            }
        } else if (sexo == 2)
        {
            qtd_mulheres += 1;
            soma_idade_m += idade;
            if (estado_civil == 2)
            {
                mulher_solt += 1;
            } else if (estado_civil == 3 && idade > 30)
            {
                mulher_div_30 += 1;
            }   
        }
        qtd_pessoas += 1;
    }
    media_id_h = soma_idade_h / qtd_homens;
    media_id_m = soma_idade_m / qtd_mulheres;
    percent_h_solt = homem_solt / qtd_homens * 100;
    percent_m_solt = mulher_solt / qtd_mulheres * 100;

    printf("\nMEDIA DE IDADE DOS HOMENS: %.1f anos", media_id_h);
    printf("\nMEDIA DE IDADE DAS MULHERES: %.1f anos", media_id_m);
    printf("\nPERCENTUAL DE HOMENS SOLTEIROS: %.1f ", percent_h_solt);
    printf("\nPERCENTUAL DE MELHERES SOLTEIRAS: %.1f ", percent_m_solt);
    printf("\nMULHERES DIVORCIADAS COM MAIS DE 30: %.0f", mulher_div_30);
    
    system("PAUSE");

}
