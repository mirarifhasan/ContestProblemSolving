public class LeapYear 
{
    public static void main(String args[])
    {
        int a = 2012;
        
        if(a%400==0 || (a%100!=0 && a%4==0))
           System.out.printf("The year %d is a leap year.\n", a);
        else 
            System.out.printf("The year %d is not a leap year.\n", a);
    }
}