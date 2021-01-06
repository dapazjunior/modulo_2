#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define n 80

int main(){
    char tempo[n];
    int i, tamanho;

    char hora[3], minuto[3], segundo[3];

    printf("Digite o tempo(HH:MM:SS): ");
    fflush(stdin);
    gets(tempo);

    tamanho = strlen(tempo);

    for (i = 0; i <= tamanho; i++)
    {
        if (i == 0) {
            hora[0] = tempo[i];
            hora[1] = tempo[i + 1];
        } 
        if (i == 3) {
            minuto[0] = tempo[i];
            minuto[1] = tempo[i + 1];
        }
        if (i == 6)
        {
            segundo[0] = tempo[i];
            segundo[1] = tempo[i + 1];
        }        
    }

    printf("%s horas, %s minutos e %s segundos", hora, minuto, segundo);

    printf("\n\n");
    system("PAUSE");

}

