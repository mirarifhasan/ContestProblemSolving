
public class Max_Min_Avg_Mean {

    public static void main(String arg[])
    {
        int arr[] = { 12,15,21,15,14,11,21,18,12,13 };
        int i=0, j, max=0, min=arr[1], sum=0, med, half=0, temp;
        float avg;

        for (i=0 ;i<10 ;i++ )
        {
            if(max<arr[i])
                max=arr[i];

            if(min>arr[i])
                min=arr[i];

            sum+=arr[i];
        }
        avg = sum/10;

        System.out.println("Maximum value is " + max);
        System.out.println("Minimum value is " + min);
        System.out.println("Average value is " + avg);

        for(i=0 ; i<=(10/2)+1 ;i++ )
        {
            for(j=i+1 ;j<10 ;j++ )
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        if(10%2==0)
            System.out.println("Median value is " + (arr[10/2]+arr[10/2+1])/2 );
        else
            System.out.println("Median value is " + arr[10/2]);
    }
}
