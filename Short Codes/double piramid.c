#include<stdio.h>

int main()
{
	int i,j,k,n;

	printf("enter to decrease row number: ");
	scanf("%d",&n);

	for(i=n; i>0;i--)
	{
		for(j=0 ;j<=n-i ;j++)
			printf(" ");

		for(k=1; k<=2*i-1 ;k++)
			printf("%d",k);
		printf("\n");
	}

	for(i=1; i<=n-1; i++)
	{
		for(j=0;j<n-i ;j++)
			printf(" ");
		for(k=1 ;k<=2*i+1 ;k++ )
			printf("*");
		printf("\n");
	}

	return 0;
}
