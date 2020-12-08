#include <stdio.h>

int main(){
    float nota1, nota2, media, nota_ef;
    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7){
        printf("APROVADO\n\n");
    } else{
        printf("Digite a nota do Exame Final: ");
        scanf("%f", &nota_ef);

        media = (media + nota_ef) / 2;
        if (media >= 6){
            printf("APROVADO\n\n");
        } else{printf("REPROVADO\n\n");}
    }

    system("PAUSE");
}