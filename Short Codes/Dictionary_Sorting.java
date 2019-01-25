import java.util.Scanner;
public class Dictionary_Sorting {
    
    public static void main(String[] args) 
    {
        int n;
        String temp;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter number of names you want to enter:");
        n = s.nextInt();
        String names[] = new String[n];
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter all the names:");
        
        for(int i = 0; i < n; i++)
            names[i] = s1.nextLine();

        System.out.println("Names in Sorted Order:");
        for (int i = 0; i < n; i++) 
        {
            String upperi = names[i].toUpperCase();
            for (int j = i + 1; j < n; j++) 
            {
                String upperj = names[j].toUpperCase();
                if (upperi.compareTo(upperj)>0) 
                {
                    temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                }
            }
            System.out.println(names[i]);
        }
    }
}