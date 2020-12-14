/*Questão 08*/

package exercicio01;

public class TestaSaudacao {
	public static void main(String[] args) {
        Saudacao saudacao = new Saudacao();
        saudacao.texto = "Boa noite";
        saudacao.destinatario = "José";

        System.out.println(saudacao.obterSaudacao());
    }
}