#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int razao, termo, n;

    printf("Razao da PA: ");
    scanf("%i", &razao);
    printf("Primeiro Termo: ");
    scanf("%i", &termo);
    printf("Quantidade de termos: ");
    scanf("%i", &n);

    printf("%i, ", termo);

    while (n > 2)
    {
        termo = termo + razao;
        printf("%i, ", termo);
        n -= 1;
    }

    termo = termo + razao;
    printf("%i\n\n", termo);

    system("PAUSE");

}
