#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    y = (f-((d*c)/a))/(((b*d)/a)+c);
    x = (c-((b*y)/a));

    printf("%d %d", x, y);
    return 0;
}
