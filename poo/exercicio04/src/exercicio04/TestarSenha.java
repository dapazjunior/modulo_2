package exercicio04;

public class TestarSenha {
    public static void main(String[] args) {
        Senha s = new Senha();
        
        s.setValor("dcbA321");
        
        
        s.iguais("dcbA321");
        s.iguais("Abcd123");
        
        s.iguaisTrim("   dcbA321   ");
        s.iguaisTrim("   Abcd123  ");
        
        System.out.println(s.tamanhoSeguro());
        System.out.println(s.possuiMaiusculaMinuscula());
        System.out.println(s.possuiNumero());
        System.out.println(s.ehValida());
    }
}
