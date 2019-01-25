#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%c",&c);
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case '+': 
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		default:
			printf("wrong entry!");
	}
}
