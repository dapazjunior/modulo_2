#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int razao, termo, limite;

    printf("Razao da PA: ");
    scanf("%i", &razao);
    printf("Primeiro Termo: ");
    scanf("%i", &termo);
    printf("Limite: ");
    scanf("%i", &limite);

    

    while (termo <= limite)
    {
        printf("%i, ", termo);
        termo = termo * razao;
    }

    printf("\n\n");
    system("PAUSE");

}
