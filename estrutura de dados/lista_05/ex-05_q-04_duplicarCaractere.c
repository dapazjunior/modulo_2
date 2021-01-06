#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char frase[n];
    int i, tamanho;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        printf("%c%c", frase[i], frase[i]);
    }
    

    printf("\n\n");
    system("PAUSE");

}

