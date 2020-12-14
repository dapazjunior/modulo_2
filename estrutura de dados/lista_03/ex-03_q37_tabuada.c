#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int fator1, fator2, produto;
    fator1 = 1;
    fator2 = 1;
    
    while (fator1 <= 10)
    {
        while (fator2 <= 10)
        {
            produto = fator1 * fator2;
		    printf("%i x %i = %i\n", fator1, fator2, produto);
            fator2 += 1;
        }
        printf("\n");
        fator1 += 1;
        fator2 = 1;
    }
    

    printf("\n\n");
    system("PAUSE");

}
