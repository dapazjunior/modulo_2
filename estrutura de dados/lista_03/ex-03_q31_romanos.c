#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int numero, cent, dez, uni, cont;
    
    printf("Numero: ");
    scanf("%i", &numero);

    cent = numero / 100;
    dez = (numero % 100) / 10;
    uni = (numero % 100) % 10;

    if (cent > 0 && cent < 4)
    {
        cont = 0;
        while (cent > cont)
        {
            printf("C");
            cont ++;
        }
    } else if (cent == 4)
    {
        printf("CD");
    } else if (cent > 4 && cent < 9)
    {
        printf("D");
        cont = 5;
        while (cent > cont)
        {
            printf("C");
            cont ++;
        }
        
    } else if (cent == 9)
    {
        printf("CM");
    }

    if (dez > 0 && dez < 4)
    {
        cont = 0;
        while (dez > cont)
        {
            printf("X");
            cont ++;
        }
    } else if (dez == 4)
    {
        printf("XL");
    } else if (dez > 4 && dez < 9)
    {
        printf("L");
        cont = 5;
        while (dez > cont)
        {
            printf("X");
            cont ++;
        }
    } else if (dez == 9)
    {
        printf("XC");
    }
    
    if (uni > 0 && uni < 4)
    {
        cont = 0;
        while (uni > cont)
        {
            printf("I");
            cont ++;
        }
    } else if (uni == 4)
    {
        printf("IV");
    } else if (uni > 4 && uni < 9)
    {
        printf("V");
        cont = 5;
        while (uni > cont)
        {
            printf("I");
            cont ++;
        }
    } else if (uni == 9)
    {
        printf("IX");
    }
	
	printf("\n\n");
	  
    system("PAUSE");

}
