// Big Integer Class in Java | Powerful lot of inbuilt functions
/*
Modular Arithmetic
GCD Calculation
Base Conversion
Power Calculation
Bitwise Operators
Prime Generation
*/

/*--------------------Code--------------------*/
import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    
    static void playWithBigInt(){
        
        Scanner sc = new Scanner(System.in);
        
        String s1 = sc.next();
        
        BigInteger b1 = new BigInteger(s1);
        BigInteger b2 = new BigInteger("11949239284029032091");
        
        System.out.println(b1.add(b2));
        b1 = b1.multiply(b2);
        System.out.println(b1);
        
        // Bit Counts - 
        // Total Set Bits:
        System.out.println(b1.bitCount());
        // Total Bits:
        System.out.println(b1.bitLength());
        
        // Integer to BigInteger
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(a+b);
        
        BigInteger b3 = BigInteger.valueOf(a);
        BigInteger b4 = BigInteger.valueOf(b);
        
        // printing GCD
        System.out.println(b3.gcd(b4));
        
        // Base Conversion
        // interpret the no. in the given base
        BigInteger b5 = new BigInteger("1101", 2); // 13
        System.out.println(b5);
        
        // Power of a number
        System.out.println(b3.pow(a)); // the power cannot be a big integer
        
        
    }
    
    public static void main(String args[]){
        playWithBigInt();
    }
    
}
