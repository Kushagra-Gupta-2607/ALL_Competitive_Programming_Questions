 // Problem - https://www.spoj.com/problems/JULKA/

/*--------------------Code--------------------*/
import java.util.Scanner;
import java.math.BigInteger;

public class Main{
    
    static void compute(BigInteger n, BigInteger k){
        
        BigInteger x, y;
        x = n.subtract(k);
        x = x.divide(BigInteger.valueOf(2));
        y = x.add(k);
        System.out.println(y);
        System.out.println(x);
        
    }
    
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        
        BigInteger n, k, ans;
        
        //int testcases = sc.nextInt();
        int testcases = 10;
        
        while(testcases>0){
            // (n-k)%2 == 0
            n = sc.nextBigInteger();
            k = sc.nextBigInteger();
            compute(n, k);
            testcases-=1;
        }
        
    }
    
}
