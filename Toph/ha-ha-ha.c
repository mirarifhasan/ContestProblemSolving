//https://toph.co/p/ha-ha-ha
#include<stdio.h>

int main()
{
    int t, i, a, b, area;
    scanf("%d", &t);

    for(i=1; i<=t; i++){
        scanf("%d %d", &a, &b);
        area = a*a + b*b;
        printf("Case %d: %d\n", i, area);
    }
    return 0;
}
