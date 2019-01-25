
public class Palindrome {
	public static void main(String arg[])
	{
		//int[10] a= new int[6];
		int i,j ,sum=0,count=0;
		double avg=0,median=0;
		int[] a={1,2,4,2,5,1};
		for (i = 0; i < a.length; i++) 
		{
	         System.out.println(a[i] + " ");
	    }
	 
    // Loop to store largest number to arr[0]
	    for(j = 1; j < a.length; ++j)
	    {
	      
	       if(a[0] < a[j])
	           a[0] = a[j];
	    }
	    System.out.println("so the max value is :");
	    System.out.println(+a[0]);
	    
	    for(j = 1; j < a.length; ++j)
	    {
	      
	       if(a[0] > a[j])
	           a[0] = a[j];
	    }
	    System.out.println("so the min value is :");
	    System.out.println(+a[0]);
	    for(j = 1; j < a.length; ++j)
	    {
	      
	       sum+=a[j];
	       count++;
	      
	          
	    } avg=sum/count;
	    
	    
	    System.out.printf("the average is ");
	    System.out.println( +avg );
	    
	    
	    for(i=0; i<a.length; i++)
        {
            count = 0;
            for(j=0; j<a.length; j++)
            {
                if(a[i]==a[j])
                {
                	
                    count++;
                }
               
            } 
                	System.out.println("so the count for first no " +a[i]+ "is :" +count);
        }
	    for(j=0;j<a.length;j++)
	    {
	    	count++;
	    }
	    if(a.length%2==0)
	    {
	    	median=count/2;
	    }else
	    	median=(count+1)/2;
	    
	    for(i=0;i<median;i++)
	    {
	    	a[0]=a[i];
	    }
	    System.out.printf("the median is:");
	    System.out.println(+a[0]);
}
}
