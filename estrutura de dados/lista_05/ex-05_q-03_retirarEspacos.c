#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char frase[n], palavra[n][n];
    int i, j = 0, k = 0, tamanho;

    printf("Digite a frase: ");
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
        printf("%s", palavra[i]);
    }

    printf("\n\n");
    system("PAUSE");

}

