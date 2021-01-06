#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char string[n], subString[n];
    int i, tamString, tamSubString, posSubs;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(string);

    printf("Digite a frase que ira substituir: ");
    fflush(stdin);
    gets(subString);

    tamString = strlen(string);
    tamSubString = strlen(subString);

    printf("Em que posicao deseja fazer a substituicao?\n> ");
    scanf("%i", &posSubs);

    for (i = 0; i < tamSubString; i++)
    {
        string[posSubs] = subString [i];
        posSubs++;
    }

    printf("%s", string);
    

    printf("\n\n");
    system("PAUSE");

}

