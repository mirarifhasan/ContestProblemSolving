
public class Bubble_Sort {
    
    public static void main(String arg[]){
        
        int arr[] = { 1,2,4,3,7,5,6,3,4,6};
        int i, j, temp, n = arr.length;
        //System.out.println(n);
        for(i=0 ;i<n ;i++ )
        {
            for(j=i+1 ;j<n ;j++ )
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
        for(i=0 ;i<n ;i++ )
            System.out.print(arr[i] + " ");
    }
}
