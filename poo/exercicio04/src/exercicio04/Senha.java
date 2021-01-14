package exercicio04;

public class Senha {
    // Atributos
    private String valor;

    //Métodos getter e setter
    public String getValor() {
        return valor;
    }

    public void setValor(String valor) {
        this.valor = valor;
    }
    
    
    //Metodos personalizados
    public void iguais(String valor){
        if (this.getValor().equals(valor)) {
            System.out.println("Senha correta");
        } else{
            System.out.println("Senha incorreta");
        }
    }
    
    public void iguaisTrim(String valor) {
        String senhaTrim = valor.trim();
        
        if (this.getValor().equals(senhaTrim)) {
            System.out.println("Senha correta");
        } else{
            System.out.println("Senha incorreta");
        }
    }
    
    public boolean tamanhoSeguro(){
        return this.getValor().length() >= 6;
    }
    
    public boolean possuiMaiusculaMinuscula(){
        int len = this.getValor().length();
        int numMai = 0, numMin = 0;
        
        for (int i = 0; i < len; i++) {
            if (this.getValor().charAt(i) >= 'A' && this.getValor().charAt(i) <= 'Z') {
                numMai++;
            }
        }
        
        for (int i = 0; i < len; i++) {
            if (this.getValor().charAt(i) >= 'a' && this.getValor().charAt(i) <= 'z') {
                numMin++;
            }
        }
        
        return (numMai > 0 && numMin > 0);
    }
    
    public boolean possuiNumero(){
        int len = this.getValor().length();
        int numNum = 0;
        
        for (int i = 0; i < len; i++) {
            if (this.getValor().charAt(i) >= 'A' && this.getValor().charAt(i) <= 'Z') {
                numNum++;
            }
        }
        
        return (numNum > 0);
    }
    
    public boolean ehValida(){
        return (this.tamanhoSeguro() && this.possuiMaiusculaMinuscula() && this.possuiNumero());
    }
}
