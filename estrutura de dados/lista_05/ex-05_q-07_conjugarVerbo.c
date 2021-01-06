#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char c, verbo[n], radical[n];
    int i, tamanho;

    printf("Digite o verbo: ");
    fflush(stdin);
    gets(verbo);

    tamanho = strlen(verbo);

    for (i = 0; i < tamanho - 2; i++)
    {
        radical[i] = verbo[i];
    }

    printf("Eu %so\n", radical);
    printf("Tu %ses\n", radical);
    printf("Ele %se\n", radical);
    printf("Nos %semos\n", radical);
    printf("Vos %seis\n", radical);
    printf("Eles %sem\n", radical);


    printf("\n\n");
    system("PAUSE");

}

