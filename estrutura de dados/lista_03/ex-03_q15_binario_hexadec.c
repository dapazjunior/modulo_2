#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num, num_bin, div_bin, digito, num_dig;
    char num_hex, dig_hex;

    printf("Digite um numero: ");
    scanf("%i", &num);
    
    num_dig = num;

    // Binário
    num_bin = 0;
    div_bin = 0;
    
    while (num != 0)
    {
        digito = num % 2;
        num_bin = num_bin + digito * (pow(10, div_bin));
        num = num / 2;
        div_bin += 1;
    }
    printf("Numero binario: %i\n\n", num_bin);

    while (num_dig != 0)
    {
        digito = num_dig % 16;
        if (digito >= 0 && digito <= 9)
        {
            dig_hex = ("%i", digito);
        } else
        {
            if (digito == 10)
            {
                dig_hex == "A";
            } else if (digito == 11)
            {
                dig_hex == "B";
            } else if (digito == 12)
            {
                dig_hex == "C";
            } else if (digito == 13)
            {
                dig_hex == "D";
            } else if (digito == 14)
            {
                dig_hex == "E";
            } else if (digito == 15)
            {
                dig_hex == "F";
            }
        }
        num_hex = dig_hex + num_hex;
        num_dig = num_dig / 16;     
    }
    printf("Numero hexadecimal: %c\n\n", num_hex);
     
    system("PAUSE");

}
