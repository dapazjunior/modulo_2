#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    float pop_a, pop_b, cresc_a, cresc_b, anos;
    pop_a = 200000;
    pop_b = 800000;
    cresc_a = 0.035;
    cresc_b = 0.0135;

    while (pop_a < pop_b)
    {
        pop_a += pop_a * cresc_a;
        pop_b += pop_b * cresc_b;

        anos += 1;
    }

    printf("Apos %.0f anos a populacao de A ultrapassara a de B", anos);
    printf("Poupulação A: %f\nPopulação B: %f", pop_a, pop_b);    
    
    system("PAUSE");

}
