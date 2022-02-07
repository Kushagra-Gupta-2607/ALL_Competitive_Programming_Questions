/*--------------------Code--------------------*/
import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    
    static BigInteger BigFactorial(int n){
        
        BigInteger b = new BigInteger("1");
        for(int i = 2; i<=n; i++){
            b = b.multiply(BigInteger.valueOf(i)); 
            // i should also be converted to BigInteger first
        }
        return b;
        
    }
    
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        System.out.println(BigFactorial(n));
        
    }
    
}
