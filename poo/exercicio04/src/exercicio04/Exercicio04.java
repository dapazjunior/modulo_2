package exercicio04;

public class Exercicio04 {
    public static void main(String[] args) {
        Conta[] contas = new Conta[5];
        
        //Questão 02
        contas[0] = new Conta(); // é necessário primeiro instanciar a conta na posição [0].
        contas[0].saldo = 10;
        System.out.println(contas[0].saldo);
    }
    
}
