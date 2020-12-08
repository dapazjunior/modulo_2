#include <stdio.h>

int main(){
    int angulo;
    printf("Digite um angulo em graus: ");
    scanf("%i", &angulo);

    if(angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270){
        printf("O angulo esta no eixo de intercessao dos quadrantes.\n\n");
        } else{
            if (angulo % 360 > 0 && angulo % 360 < 90){
                printf("O angulo esta no primeiro quadrante.\n\n");
            }else if (angulo % 360 > 90 && angulo % 360 < 180)
            {
                printf("O angulo esta no segundo quadrante.\n\n");
            }else if (angulo % 360 > 180 && angulo % 360 < 270)
            {
                printf("O angulo esta no terceiro quadrante.\n\n");
            }else if (angulo % 360 > 270 && angulo % 360 < 360)
            {
               printf("O angulo esta no quarto quadrante.\n\n");
            }

    system("PAUSE");
}
}
