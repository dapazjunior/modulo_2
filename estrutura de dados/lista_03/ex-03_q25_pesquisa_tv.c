#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float canal2, canal4, canal5, canal7, canal10, espectadores, canal, pessoas;
    float aud2, aud4, aud5, aud7, aud10;

    canal2 = 0;
    canal4 = 0;
    canal5 = 0;
    canal7 = 0;
    canal10 = 0;
    espectadores = 0;

    printf("Canal sendo assistido: ");
    scanf("%i", &canal);

    while (canal != 0)
    {
        printf("Pessoas assistindo: ");
        scanf("%i", &pessoas);

        if (canal == 2)
        {
            canal2 += pessoas;
        } else if (canal == 4)
        {
            canal4 += pessoas;
        } else if (canal == 5)
        {
            canal5 += pessoas;
        } else if (canal == 7)
        {
            canal7 += pessoas;
        } else if (canal == 10)
        {
            canal10 += pessoas;
        }

        espectadores += pessoas;
        
        printf("Canal sendo assistido: ");
        scanf("%i", &canal);        
    }

    aud2 = canal2 / espectadores * 100;
    aud4 = canal4 / espectadores * 100;
    aud5 = canal5 / espectadores * 100;
    aud7 = canal7 / espectadores * 100;
    aud10 = canal10 / espectadores * 100;

    printf("> > > RESULTADO < < <\n");
    printf("(em percentual)");
    printf("Canal 2: %.1f", aud2);
    printf("Canal 4: %.1f", aud4);
    printf("Canal 5: %.1f", aud5);
    printf("Canal 7: %.1f", aud7);
    printf("Canal 10: %.1f", aud10);
    
    system("PAUSE");

}
