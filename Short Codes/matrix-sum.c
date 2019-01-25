#include<stdio.h>

int main ()
{
	int r, c, i, j, a[10][10], b[10][10], d[10][10];
	
	printf("input the size of matrix (n x n)");
	scanf("%d %d", &i, &j);
	
	printf("\tfor matrix a\n");
	for(r=0; r<i; r++)
	{
		for(c=0; c<j; c++)
		{
			printf("row %d, column %d :", r, c);
			scanf("%d", & a[r][c]);
		}
	}
	
	printf("\n\n\tfor matrix b\n");
	for(r=0; r<i; r++)
	{
		for(c=0; c<j; c++)
		{
			printf("row %d, column %d :", r, c);
			scanf("%d", &b[r][c]);
			d[r][c]=a[r][c]+b[r][c];
		}
	}
	
	printf("\n4sum of the two matrix is given below:\n");
	
	for(c=0; c<j; c++)
		printf("\t%d",c);
	printf("\n");
	
	for(r=0;r<i;r++)
	{	
		printf("%d\t",r);
		for(c=0 ;c<j ; c++)
		{
			printf("%d\t", d[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}
