
public class Fibonacci {
    
    public static void main(String arg[]){
        
        int n=13, i, t0=0, t1=1, sum;
        System.out.println("Fibonacci series");
        System.out.print(t0+" " + t1+" " );
        
        for(i=2 ;i<n ;i++ )
        {
            sum = t0+t1;
            t0 = t1;
            t1 = sum;
            System.out.print(sum + " " );
        }
    }
}
