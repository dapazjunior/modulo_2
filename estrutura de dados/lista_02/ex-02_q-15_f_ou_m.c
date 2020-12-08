#include <stdio.h>
#include <math.h>

int main(){
    char letra;
   
    printf("Digite F ou M: ");
    scanf("%c", &letra);

    if (letra == "F"){
        printf("F - FEMININO");
    } else
    if (letra == "M"){
        printf("M - MASCULINO");
    } else
    {
        printf("Sexo invalido!");
    }
    
    system("PAUSE");
}
