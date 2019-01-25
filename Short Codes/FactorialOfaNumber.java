
public class FactorialOfaNumber {
    public static void main(String arg[])
    {
        int a=5, i, fac=a;
        for(i=a-1; i>1; i--)
        {
            fac=fac*i;
        }
        System.out.printf("The factorial of %d is = %d.\n", a, fac);
    }
}
