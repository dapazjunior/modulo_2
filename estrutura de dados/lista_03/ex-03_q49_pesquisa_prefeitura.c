#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float soma_sal, media_sal, soma_filhos, media_filhos, cont_1000, percent_1000, n, cont, salario, filhos;

    printf("Numero de entrevistados: ");
    scanf("%f", &n);

    soma_sal = 0;
    soma_filhos = 0;
    cont_1000 = 0;
    cont = 1;

    while (cont <= n)
    {
        printf("Pessoa %.0f\n", cont);
        printf("Salario: ");
        scanf("%f", &salario);
        printf("Numero de filhos: ");
        scanf("%f", &filhos);

        soma_sal += salario;
        soma_filhos += filhos;

        if (salario <= 1000)
        {
            cont_1000 += 1;
        }
    
    }

    media_sal = soma_sal / n;
    media_filhos = soma_filhos / n;
    percent_1000 = (cont_1000 / n) * 100;

        printf(">>>>>>>   RECIBO   <<<<<<<\n");
        printf("Media de salarios: R$ %.2f\n", media_sal);
        printf("Media de filhos%.1f\n", media_filhos);
        printf("Percentual que recebe mais de R$ 100 de salario: %.1f\n", percent_1000);

    printf("\n\n");
    system("PAUSE"); 

}
