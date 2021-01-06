#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char c, frase[n], frase2[n];
    int i, j, tamanho;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho ; i++){
        c = frase[i];
        j = tamanho - i - 1;
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')){
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            	frase2[j] = frase[i];
			} else {
				frase2[j] = '#';
			}
        }
        
        }

    printf("Frase criptografada: %s\n", frase2);

    printf("\n\n");
    system("PAUSE");

}

