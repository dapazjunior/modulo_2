#include <stdio.h>
#include<stdlib.h>

int main(){
    int x, num_atual, num_anterior;
    char lista;

    printf("X = ");
    scanf("%i", &x);
    

    printf("Digite um numero: ");
    scanf("%i", num_atual);

    num_anterior = 0;

    while (x != num_atual + num_anterior)
    {
        lista = lista + ("%i, ", num_atual); 
        num_anterior = num_atual;
        printf("Digite um numero: ");
        scanf("%i", num_atual);
    }

    lista = lista + ("%i", num_atual);

    printf("%c", lista);


    system("PAUSE");

}

