
public class Inverse_Matrix {
    
    public static void main(String arg[])
    {
        int i,j,k;
	int ar1[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int ar2[][]= new int[3][3]; 
        	
	for(i=0;i<3;i++)
	{
            for(j=0;j<3;j++)
                ar2[j][i]=ar1[i][j];
	}
	System.out.printf("\n");
	
        for(i=0;i<3;i++)
            System.out.printf("\t%d",i);
        
	System.out.printf("\n");
	
        for(i=0;i<3;i++)
	{
            System.out.printf("%d",i);
            for(j=0;j<3;j++)
                System.out.printf("\t%d",ar2[i][j]);
            
            System.out.printf("\n");
	}
    }
}
