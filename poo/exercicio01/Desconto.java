/*Questão 12*/

package exercicio01;

public class Desconto {
	double valorOriginal, desconto;
	
	double calcula() {
		return (valorOriginal * (1 - desconto / 100));
	}
	}