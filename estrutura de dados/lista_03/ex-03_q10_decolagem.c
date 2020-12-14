#include <stdio.h>

int main(){
    float soma_peso_containers, peso_container;
    int qtd_containers, num_container;
    printf("Quantidade de containers: ");
    scanf("%i", &qtd_containers);

    num_container = 1;
    soma_peso_containers = 0;
    while (qtd_containers != 0)
    {
        printf("Digite o peso do container %i: ", num_container);
        scanf("%f", &peso_container);
        soma_peso_containers += peso_container;
        qtd_containers -= 1;
        num_container += 1;
    }


    int num_passageiros, num_bagagens, num_bilhete, qtd_bagagens;
    num_passageiros = 0;
    num_bagagens = 0;

    while (num_bilhete != 0)
    {
        printf("Numero do bilhete: ");
        scanf("%i", &num_bilhete);
        if (num_bilhete != 0)
        {
            printf("Numero de bagagens: ");
            scanf("%i", &qtd_bagagens);

            num_passageiros += 1;
            num_bagagens += qtd_bagagens;
        }
    }

    float peso_passageiros, peso_combustivel, volume_combustivel;
    peso_passageiros = num_passageiros * 70 + num_bagagens * 10;
    
    peso_combustivel = 500000 - soma_peso_containers - peso_passageiros;
    volume_combustivel = peso_combustivel / 1.5;
    
    if (volume_combustivel >= 10000)
    {
        printf("\nDECOLAGEM AUTORIZADA!");
    } else
    {
        printf("\nCombustivel insuficiente!\nDECOLAGEM NAO AUTORIZADA!");
    }
    
    system("PAUSE");

}
