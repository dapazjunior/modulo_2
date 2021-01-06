#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char c, frase[n];
    int i, tamanho;

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i <= tamanho; i++)
    {
        c = frase[i];
        switch (c)
        {
        case '1':
            printf("um");
            break;
        
        case '2':
            printf("dois");
            break;
        
        case '3':
            printf("tres");
            break;
        
        case '4':
            printf("quatro");
            break;
        
        case '5':
            printf("cinco");
            break;
        
        case '6':
            printf("seis");
            break;
        
        case '7':
            printf("sete");
            break;

        case '8':
            printf("oito");
            break;

        case '9':
            printf("nove");
            break;
        
        case '0':
            printf("zero");
            break;

        default:
            printf("%c", c);
        }
        
    }


    printf("\n\n");
    system("PAUSE");

}

