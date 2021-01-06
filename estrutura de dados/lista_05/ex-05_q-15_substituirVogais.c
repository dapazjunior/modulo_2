#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char c, frase[n], frase2[n];
    int i, contVogais = 0, cont = 0, contNao = 0, tamanho;

    typedef struct registroVogais
    {
        int posVogal;
        char vogal;
    } TRegVogais;
    
    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho ; i++){
        c = frase[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contVogais++;
        }        
    }

    TRegVogais regVogais[contVogais];
    
    for (i = 0; i < tamanho ; i++){
        c = frase[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            regVogais[cont].posVogal = i;
            regVogais[cont].vogal = c;
            cont++;
        } else
        {
            frase2[contNao] = c;
            contNao++;
        }
        
    }

    printf("Frase criptografada: %s\n", frase2);
    printf("Frase descriptografada: %s\n", frase);

    printf("\n\n");
    system("PAUSE");

}

