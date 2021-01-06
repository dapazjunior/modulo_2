#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char data[n];
    int i, tamanho;

    char dia[3], mes[3], ano[5];

    printf("Digite a data(DD/MM/AAAA): ");
    fflush(stdin);
    gets(data);

    tamanho = strlen(data);

    for (i = 0; i <= tamanho; i++)
    {
        if (i == 0) {
            dia[0] = data[i];
            dia[1] = data[i + 1];
        } 
        if (i == 3) {
            mes[0] = data[i];
            mes[1] = data[i + 1];
        }
        if (i == 6)
        {
            ano[0] = data[i];
            ano[1] = data[i + 1];
            ano[2] = data[i + 2];
            ano[3] = data[i + 3];
        }        
    }

    if (strcmp(mes, "01") == 0) {
        printf("%s de Janeiro de %s\n", dia, ano);
    }

    if (strcmp(mes, "02") == 0) {
        printf("%s de Fevereiro de %s\n", dia, ano);
    }

    if (strcmp(mes, "03") == 0) {
        printf("%s de Março de %s\n", dia, ano);
    }

    if (strcmp(mes, "04") == 0) {
        printf("%s de Abril de %s\n", dia, ano);
    }

    if (strcmp(mes, "05") == 0) {
        printf("%s de Maio de %s\n", dia, ano);
    }

    if (strcmp(mes, "06") == 0) {
        printf("%s de Junho de %s\n", dia, ano);
    }

    if (strcmp(mes, "07") == 0) {
        printf("%s de Julho de %s\n", dia, ano);
    }

    if (strcmp(mes, "08") == 0) {
        printf("%s de Agosto de %s\n", dia, ano);
    }

    if (strcmp(mes, "09") == 0) {
        printf("%s de Setembro de %s\n", dia, ano);
    }

    if (strcmp(mes, "10") == 0) {
        printf("%s de Outubro de %s\n", dia, ano);
    }

    if (strcmp(mes, "11") == 0) {
        printf("%s de Novembro de %s\n", dia, ano);
    }

    if (strcmp(mes, "12") == 0) {
        printf("%s de Dezembro de %s\n", dia, ano);
    }


    printf("\n\n");
    system("PAUSE");

}

