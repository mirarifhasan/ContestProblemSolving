
public class Multiply_Matrix {
    
    public static void main(String arg[]){
        
        int i, j, k, s1;
	int a1[][]={{1,2,3},{4,5,6},{7,8,9}};
	int a2[][]={{10,20,30},{40,50,60},{70,80,90}};
	int a3[][] = new int[3][3];
	for(i=0; i<3; ++i)
	{
            for (j=0; j<3; ++j)
            {
                s1=0;
                for(k=0;k<3;k++)
                    s1=s1+a1[i][k] * a2[k][j];
                a3[i][j] = s1;
            }
	}
	System.out.print("\n\n");
	for(i=0; i<3; ++i)
		System.out.printf("\t%d", i);
	for(i=0; i<3; ++i)
	{
            System.out.printf("\n\n");
            System.out.printf("%-5d\t", i);
            for (j=0; j<3; ++j)
                System.out.printf("%-5d\t", a3[i][j]);
	}
	System.out.printf("\n\n");
    }
}
