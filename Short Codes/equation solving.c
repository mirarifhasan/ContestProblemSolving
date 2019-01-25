#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    float x, y;
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
    {
        y = (f-((d*c)/a))/(c-((b*d)/a));
        x = (c-(b*y))/a;

        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}
