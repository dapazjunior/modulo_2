#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int n, cont, id;
    float horas, n_dep, inss, ir, sal_bruto, sal_liquido;

    printf("Numero de funcionarios: ");
    scanf("%i", &n);

    cont = 0;

    while (cont < n)
    {
        printf("ID: ");
        scanf("%f", &id);
        printf("Horas trabalhadas: ");
        scanf("%f", &horas);
        printf("Numero de dependentes: ");
        scanf("%f", &n_dep);

        sal_bruto = horas * 12 + n_dep * 40;
        inss = sal_bruto * 0.085;
        ir = sal_bruto * 0.05;
        sal_liquido = sal_bruto - inss - ir;

        printf(">>>>>>>   RECIBO   <<<<<<<\n");
        printf("Funcionário: %i\n", id);
        printf("Salário bruto: R$ %.2f\n", sal_bruto);
        printf("INSS: R$ %.2f\n", inss);
        printf("IR: R$ %.2f\n", ir);
        printf("Salário liquido: R$ %.2f\n", sal_liquido);
    }

    printf("\n\n");
    system("PAUSE"); 

}
