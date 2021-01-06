#include <stdio.h>
#include <math.h>
#define PI 3.14

//Questão 1
float kmPorHora(float velocidadeMs) {
	return (velocidadeMs * 3.6);
}

//Questão 2
float mPorSegundo(float velocidadeKmh) {
	return (velocidadeKmh / 3.6);
}

//Questão 3
float dollarParaReal(float valor) {
	return (valor * 5.29);
}

//Questão 4
float areaTriangulo(float base, float altura) {
	return ((base * altura) / 2);
}

//Questão 5
float areaQuadrado(float lado) {
    return(lado * lado);
}

//Questão 6
float areaRetangulo(float base, float altura) {
    return(base * altura);
}

//Questão 7
float areaCircunferencia(float raio) {
    return(2 * PI * raio);
}

//Questão 8
float volumeEsfera(float raio) {
    return((4 * PI * pow(raio, 3) / 3));
}

//Questão 9
float celciusParaFarenheit(float tCelcius) {
    return ((9 * tCelcius + 160) / 5);
}

//Questão 10
float fatenheitParaCelcius(float tFarenheit) {
    return ((5 * tFarenheit - 160) / 9);
}

//Questão 11
float fatorial(float num) {
    float valFatorial = num;
    
    while (num > 1)
    {
        valFatorial = valFatorial * (num - 1);
        num -= 1;
    }

    return(valFatorial);
}

//Questão 12
void ehPrimo(int num) {
    int multiplos = 0;

    for (int i = 2; i < num; i++)
      {
        if (num % i == 0)
        {
        	multiplos ++;
        }
      }
    
    if (multiplos == 0)
    {
        printf("%i eh primo!", num);
    } else
    {
        printf("%i nao eh primo!", num);
    }
}

//Questão 13
void dataValida(int dia, int mes, int ano) {
    if (dia > 0 && dia <= 31) {
        if (mes > 0 && mes <= 12) {
            if (ano > 0)
            {
                printf("Data Valida!");
            }
        }
    } else
    {
        printf("Data Invalida"); 
    }
    
}

//Questão 14
int mmc(int num1, int num2) {
    int vMmc = num1;

    if (num2 > num1)
    {
        vMmc = num2;
    }

    while (!(vMmc % num1 == 0 && vMmc % num2 == 0))
    {
        vMmc += 1;
    }

    return vMmc;
}

//Questão 15
int mdc(int num1, int num2) {
    int vMdc = num1;

    if (num2 < num1)
    {
        vMdc = num2;
    }

    while (!(num1 % vMdc == 0 && num2 % vMdc == 0))
    {
        vMdc -= 1;
    }

    return vMdc;
}

//Questão 16
void ehBissexto(int ano) {
    if (ano % 4 == 0)
    {
        printf("Eh bissexto!");
    } else
    {
        printf("Nao eh bissexto!");
    } 
}

//Questão 18
void fibonacci(int num) {
    int n0 = 0, n1 = 1, qtd = 2, soma;

    while (qtd < num)
    {
        soma = n0 + n1;
        printf("%i ", soma);
        n0 = n1;
        n1 = soma;
        qtd += 1;
    }
}

//Questão 20
int soma1aN(int num) {
    int cont, soma;
    soma = 0;
    
    for (cont = 1; cont <= num; cont++)
    {
		soma += cont;
    }

    return soma;
}