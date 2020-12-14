#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float peso_gordo, peso_magro, num_id, peso;
    int id_gordo, id_margo, id;

    peso_gordo = 0;
    peso_magro = 99999999999999;

    printf("Numero de identificacao: ");
    scanf("%i", id);

    while (id != 0)
    {
        printf("Peso do boi: ");
        scanf("%f", peso);

        if (peso > peso_gordo)
        {
            id_gordo = id;
        }

        if (peso < peso_magro)
        {
            id_margo = id;
        }
        
        printf("Numero de identificacao: ");
        scanf("%i", id);
        
    }

    printf("Boi mais magro: %i - Peso: %.1f kg", id_margo, peso_magro);
    printf("Boi mais gordo: %i - Peso: %.1f kg", id_gordo, peso_gordo);
    

    system("PAUSE");

}
