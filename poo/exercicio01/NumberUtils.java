/*Questão 13*/

package exercicio01;

public class NumberUtils {
	int num;

    boolean isPair() {
        return num % 2 == 0;
    }

    boolean isOdd() {
        return num % 2 != 0;
    }

    boolean isPrime() {
       for (int i = 2; i < num; i++) {
           if (num % i == 0) return false;
       }
       return true;
    }

    String printCount() {
		String contagem = "";
		
		for (int i = 0; i < num; i++) {
			contagem += i + ", ";
		}
        contagem += num;
        
        return contagem;
    }

    String printReverseCount() {
        String contagem = "";
		
		for (int i = num; i > 0 ; i--) {
			contagem += i + ", ";
		}
        contagem += 0;
        
        return contagem;
    }
	}