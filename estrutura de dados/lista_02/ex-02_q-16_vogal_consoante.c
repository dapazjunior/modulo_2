#include <ctype.h>
#include <stdio.h>
#include <conio.h>

int main(){
	char letra;
	int laco;

	for (laco = 0; laco < 5; laco++)
	{
		printf("Digite uma letra: ");
		scanf("%c", &letra);

        letra = toupper(letra);
        switch(letra)
        {   case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("É uma vogal\n\n");
                break;
            
            default:

                printf("É uma consoante\n\n");
    }
	}

    system("PAUSE");
}
