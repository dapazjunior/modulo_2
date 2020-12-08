#include <stdio.h>

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;
   
    printf("Digite a primeira data (DD MM AAAA): ");
    scanf("%i %i %i", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (DD MM AAAA): ");
    scanf("%i %i %i", &dia2, &mes2, &ano2);

    if(ano2 > ano1){
        printf("Data mais recente: %i/%i/%i\n\n", dia2, mes2, ano2);
    } else if (ano1 > ano2)
    {
        printf("Data mais recente: %i/%i/%i\n\n", dia1, mes1, ano1);
    } else{
       if(mes2 > mes1){
        printf("Data mais recente: %i/%i/%i\n\n", dia2, mes2, ano2);
    } else if (mes1 > mes2)
    {
        printf("Data mais recente: %i/%i/%i\n\n", dia1, mes1, ano1);
    } else{
        if(dia2 > dia1){
        printf("Data mais recente: %i/%i/%i\n\n", dia2, mes2, ano2);
    } else if (dia1 > dia2)
    {
        printf("Data mais recente: %i/%i/%i\n\n", dia1, mes1, ano1);
    } else{
        printf("As datas são iguais\n\n");
    }
    }
    }

    system("PAUSE");
}
