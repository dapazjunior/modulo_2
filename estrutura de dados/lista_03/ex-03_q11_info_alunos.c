#include <stdio.h>

int main(){
    int matricula, num_aprovados, num_reprovados, num_alunos;
    float nota1, nota2, nota3, media;

    printf("Digite a matricula: ");
    scanf("%i", &matricula);

    num_aprovados = 0;
    num_reprovados = 0;

    while (matricula != 0)
    {
        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        printf("Nota 3: ");
        scanf("%f", &nota3);

        media = (nota1*2 + nota2*3 + nota3*5)/10;
        if(media >= 7)
        {
            num_aprovados++;
        }else{
            num_reprovados++;
        }
        printf("\nDigite a matricula: ");
        scanf("%i", &matricula);
        
    }

    num_alunos = num_aprovados + num_reprovados;

        printf("Numero de alunos: %i\nAprovados: %i\nReprovados: %i\n\n", num_alunos, num_aprovados, num_reprovados);
    
    system("PAUSE");

}
