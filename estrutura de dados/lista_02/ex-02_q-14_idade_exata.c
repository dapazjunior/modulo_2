#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, raiz1, raiz2;
   
    printf("Digite os valores de a, b e c respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a==0){
        printf("Valor de 'a' invalido!");
    } else {
        delta = (b*b)/(4*a*c);
        
        if (delta == 0){
            raiz1 = -b/(2*a);
            printf("A raiz eh %.1f.", raiz1);
        }
        
        else if (delta > 0){
            raiz1 = (-b + pow(delta, 1/2))/(2*a);
            raiz2 = (-b - pow(delta, 1/2))/(2*a);
            printf("As raizes sao %.1f e %.1f.", raiz1, raiz2);
        }

        else {
            printf("A função não possui raízes reais.");
        }
        
    }

    system("PAUSE");
}
