#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a, b, c, d;
    char s[10000];
    scanf("%d %d", &a, &b);
    c = a + b;
    itoa(c ,s , 10);
    d = strlen(s);
    printf("%d", d);
    return 0;
}
