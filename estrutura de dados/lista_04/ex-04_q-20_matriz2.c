#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int i, j, n=1, matriz[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (n <= 9)
            {
                printf("0%i ", n);
            } else
            {
                printf("%i ", n);
            }

            n++;

        }
        printf("\n");
    }
    

    printf("\n\n");
    system("PAUSE");

}
