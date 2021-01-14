#include <stdio.h>
#include <string.h>
#include <iostream>
#define n 30
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno turma[n];

void incluirDesordenado(Aluno e){
	int qa = 0, continua, maximo = n;
	
	printf("\nInserir Novo Aluno\n\n");

	do {
		if (qa < maximo) {
			printf("\nMatricula do Aluno: ");
			scanf("%d",&turma[qa].mat);
			printf("\nNome: ");
			scanf("%s",turma[qa].nome);
			qa++;
			printf("\n\nAluno Inserido com Sucesso!\n\n");
		} else{
			printf("\n\nErro ao Inserir – Turma Cheia!\n\n"); 
          	break;
		}
		
		printf("\n\n Inserir outro(1-sim/2-nao)? "); 
        scanf("%d",&continua); 
	    
		} while (continua == 1);
	}

//retorna a posicao do elemento procurado
int procura(int mat){
	int i = 0, continua, maximo = n;

	do{
		if (turma[i].mat == mat)
		{
			return i;
		}

	} while (i < maximo);

	return -1;
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	printf("\nMatricula: %i\n", turma[pos].mat);
	printf("Aluno: %s\n\n", turma[pos].nome);
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
	int i, matprocurada, achou, continua;
    
	do { 
    	printf("\nConsultar Aluno por Matricula\n\n");
        printf("\nMatricula do Aluno: ");
        scanf("%d",&matprocurada);
        
		achou = procura(matprocurada);
        
		if (achou != -1)
		{
			mostrar(achou);
		} else {
			printf("\n\n\aNumero de Matricula Incorreto!!!!!!\n");
		}
        
		printf("\n\nConsultar outro(1-sim/2-nao)? "); 
        scanf("%d",&continua);

    } while (continua == 1);	
}

//estratégia 1: colocar o ultimo elemento da lista na posição do elemento removido
void remover00(){
	int matprocurada, i = -1, maximo = n, achou, resp, continua;
	do{
		i++;
	} while (turma[i].mat != NULL || turma[i].mat != 0);
    
	do{
		printf("\nRemover Aluno\n\n");
		printf("\nMatricula do Aluno: ");
		scanf("%d",&matprocurada);
		
		achou = procura(matprocurada);
		
		if (achou != -1) {
			mostrar(achou);
			printf("\nDeseja remover o aluno (1-sim/2-nao)? ");
			scanf("%d",&resp);
		
			if (resp == 1)
			{
				turma[achou].mat = turma[i].mat;
				turma[achou].nome = turma[i].nome;
				memset(&turma[i], 0, sizeof(turma[i]));
				printf("Aluno Removido com suceso!\n\n");
			}
		} else{
			printf("\n\n\aNumero de Matricula Incorreto!!!!!!\n");
		}

		printf("\n\nConsultar outro(1-sim/2-nao)? "); 
		scanf("%d",&continua);

	} while (continua == 1);
}

//estratégia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(){
	int matprocurada, i = -1, maximo = n, achou, resp, continua;
	do{
		i++;
	} while (turma[i].mat != NULL || turma[i].mat != 0);
    
	do{
		printf("\nRemover Aluno\n\n");
		printf("\nMatricula do Aluno: ");
		scanf("%d",&matprocurada);
		
		achou = procura(matprocurada);
		
		if (achou != -1) {
			mostrar(achou);
			printf("\nDeseja remover o aluno (1-sim/2-nao)? ");
			scanf("%d",&resp);
		
			if (resp == 1)
			{
				for ( achou; achou < i ; achou++)
				{
					turma[achou].mat = turma[achou + 1].mat;
					turma[achou].nome = turma[achou + 1].nome;
				}
				
				memset(&turma[i], 0, sizeof(turma[i]));
				printf("Aluno Removido com suceso!\n\n");
				
			} else {
				printf("\n\n\aNumero de Matricula Incorreto!!!!!!\n");
			}

		} else{
			printf("\n\n\aNumero de Matricula Incorreto!!!!!!\n");
		}

		printf("\n\nConsultar outro(1-sim/2-nao)? "); 
		scanf("%d",&continua);

	} while (continua == 1);
}

main(){
	
	
}
