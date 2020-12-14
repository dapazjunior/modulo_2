#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n, cont;

    printf("N: ");
    scanf("%i", &n);

    for (cont = 1; cont < n; cont++)
    {
        printf("%i, ", cont);
    }
    
    printf("%i", n);
	
	printf("\n\n");
    system("PAUSE");

}
