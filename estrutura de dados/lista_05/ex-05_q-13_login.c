#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char frase[n], palavra[n][n];
    int i, j = 0, k = 0, tamanho, nPalavras = 0;

    printf("Digite o nome completo: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        if (frase[i] != ' ') {
            palavra[j][k] = frase[i];
            k ++;
        } else {
            j++;
            k=0;
        }
    }

    for (i = 0; i <= j; i++)
    {
        printf("%c", palavra[i][0]);
    }


    printf("\n\n");
    system("PAUSE");

}

