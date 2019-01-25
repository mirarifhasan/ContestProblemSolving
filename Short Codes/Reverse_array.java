
public class Reverse_array {

 
    public static void main(String arg[])
{
    int a[] = { 12,15,21,15,14,11,21,18,12,13 };
    int a2[] = new int [10];
    int i, j;
    
    for(i=0,j=9 ; i<a.length ; i++,j-- )
        a2[j]=a[i];
    for(j=0 ;j<a.length ;j++ ) 
        System.out.printf("%d ", a2[j]);       
}
}
