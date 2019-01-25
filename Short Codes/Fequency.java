
public class Fequency 
{
    public static void main(String arg[])
    {
        int arr[] = { 12,15,21,15,14,11,21,18,12,13 };
        int i, j, k, count;
        Boolean p = true;
        for(i=0 ;i<10 ;i++ )
        {
            count=1; p=true;
            for(j=i+1 ; j<10 ;j++ )
            {    
                if(arr[i]==arr[j])
                    count++;
            }
            
            for(k=0 ;k<=i-1 ;k++ )
            {
                if(arr[k]==arr[i])
                    p=false;
            }
            if(p)
                System.out.println( arr[i] + " is found in array about " + count +" times." );
        }
    }
}