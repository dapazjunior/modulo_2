/*Questão 11*/

package exercicio01;

public class DecimalNumber {
	double numero;
	
	int parteInteira() {
		return (int) numero;
	}
	
	double parteDecimal() {
		return numero - (int) numero;
	}

}