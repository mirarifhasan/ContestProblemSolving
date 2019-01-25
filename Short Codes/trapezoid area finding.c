#include<stdio.h>
int main()
{
    int u, l, h, area;
    scanf("%d %d %d", &u, &l, &h);
    area = (u+l)*h/2;
    printf("%d", area);
    return 0;
}
