#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float altura, peso, altura_mais_alta, altura_mais_baixa, peso_mais_gorda, peso_mais_magra;
    char nome, nome_mais_alta, nome_mais_baixa, nome_mais_gorda, nome_mais_magra;

    printf("Nome: ");
    scanf("%c", nome);

    altura_mais_alta = 0;
    altura_mais_baixa = 99999999999;
    peso_mais_gorda = 0;
    peso_mais_magra = 999999999999;

    while (nome != "FIM")
    {
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Altura: ");
        scanf("%f", &altura);

        if (altura >= altura_mais_alta)
        {
            nome_mais_alta = nome;
            altura_mais_alta = altura;
        }
        
        if (altura < altura_mais_baixa)
        {
            nome_mais_baixa = nome;
            altura_mais_baixa = altura;
        }

        if (peso > peso_mais_gorda)
        {
            nome_mais_gorda = nome;
            peso_mais_gorda = peso;
        }
        
        if (peso < peso_mais_magra)
        {
            nome_mais_magra = nome;
            peso_mais_magra = peso;
        }           
    }

    printf("Mais alta: %c - Altura: %.2f m\n", nome_mais_alta, altura_mais_alta);
    printf("Mais baixa: %c - Altura: %.2f m\n", nome_mais_baixa, altura_mais_baixa);
    printf("Mais magra: %c - Peso: %.2f m\n", nome_mais_magra, peso_mais_magra);
    printf("Mais gorda: %c - Peso: %.2f m\n", nome_mais_gorda, peso_mais_gorda);
    
    system("PAUSE");

}
