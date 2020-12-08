#include <stdio.h>

int main(){
    float ang1, ang2, ang3;
    printf("Digite tres angulos: ");
    scanf("%f %f %f", &ang1, &ang2, &ang3);
    
    if ((ang1 + ang2 + ang3 == 180) && (ang1 > 0 && ang2 > 0 && ang3 > 0)){
        if (ang1 < 90 && ang2 < 90 && ang3 < 90){
            printf("O triangulo eh Acutangulo\n\n");
            } else{
                if (ang1 == 90 || ang2 == 90 || ang3 == 90){
            printf("O triangulo eh Retangulo\n\n");
            } else{
            printf("O triangulo eh Obtusangulo\n\n");}
            }
    } else{
        printf("Os angulos nao formam um triangulo\n\n");
    }

    system("PAUSE");

}