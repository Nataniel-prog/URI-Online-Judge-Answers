package teste;


public class TESTE {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int dec = 42;
        
        System.out.print("First program: \n");
        System.out.println(" - In Binary: " + Integer.toBinaryString(dec));
        System.out.println(" - In Hexadecimal:  " + Integer.toHexString(dec));
        System.out.println(" - In Octal: " + Integer.toOctalString(dec) + "\n");
        
        
        int bin = 0b101010;
        int octal = 052;
        int hex = 0x2A;
        System.out.print("Second program:\n");
        System.out.printf(" - From Binary: %d \n", bin);
        System.out.printf(" - From Octal: %d\n", octal);
        System.out.printf(" - From Hexadecimal: %d\n", hex);
    }
    
}
