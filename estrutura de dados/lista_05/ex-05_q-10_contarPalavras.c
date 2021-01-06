#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char frase[n], palavra[n][n];
    int nPalavras = 1, i, tamanho;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        if (frase[i] == ' ') {
            nPalavras++;
        }
    }
    
    printf("Foram digitadas %i palavras", nPalavras);

    printf("\n\n");
    system("PAUSE");

}

