#include<stdio.h>
int main()
{
    long long a;
    int i;
    scanf("%lld", &a);
    for(i=a-1; i>1; i--)
        a=a*i;
    printf("%lld", a);
    return 0;
}
