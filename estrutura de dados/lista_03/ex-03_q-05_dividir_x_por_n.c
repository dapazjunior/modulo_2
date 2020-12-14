#include <stdio.h>

int main(){
    float x, n, div;

    printf("X = ");
    scanf("%f", &x);
    printf("N = ");
    scanf("%f", &n);
    
    while (n > 1)
    {
        div = x / n;
        printf("X/N = %f\n\n", div); 
        
        x = div;
        n--;

    }

    system("PAUSE");

}

