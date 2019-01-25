
public class Duplicate_Number_Remove {
    
    public static void main(String arg[])
    {
        int arr[]= {1,2,2,3,5,3,4,4,6,7};
        int i, j, temp, n=arr.length ;
        
        for(i=0 ;i<n ;i++ )
        {
            for(j=i+1 ;j<n ;j++ )
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        for(i=0 ;i<n ;i++ )
        {
            if(arr[i]==arr[i+1])
            {
                for(j=i+1 ;j<n ;j++ )
                    arr[j]=arr[j+1];
            }
            n=n-1;
        }

        for(i=0 ;i<n ;i++ )
            System.out.print(arr[i] + " ");
    }   
}
