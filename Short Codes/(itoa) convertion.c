#include<stdio.h>
int main()
{
    int a, b, r, i;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        i=0;
        r = a + b;
        while(r!=0)
        {
            i++;
            r = r/10;
        }
        printf("%d", i);
    }
    return 0;
}
