#include <stdio.h>
int main(void)
{
	int i, j, k, s1;
	int a1[3][3]={{1,2,3},{4,5,6}, {7,8,9}},
	a2[3][3]={{10,20,30},{40,50,60},{70,80,90}},
	a3[3][3];
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
	printf("\n\n");
	for(i=0; i<3; ++i)
		printf("\t%d", i);
	for(i=0; i<3; ++i)
	{
		printf("\n\n");
		printf("%-5d\t", i);
		for (j=0; j<3; ++j)
			printf("%-5d\t", a3[i][j]);
	}
	printf("\n\n");
	return 0;
}
