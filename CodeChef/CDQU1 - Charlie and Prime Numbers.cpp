#include<stdio.h>

int main()
{
    int tc, i, j, k, a, b, sum=0;

    scanf("%d", &tc);

    for(i=0; i<tc; i++){
        sum=0;
        scanf("%d %d", &a,&b);
        for(j=a ;j<=b ;j++ ){
            for(k=2 ; k<j ; k++){
                if(j%k == 0)
                    break;
                else if(k+1 == j)
                    sum = sum + j;
            }
        }
        if(a==1)
            sum = sum + 2;
        printf("%d\n", sum);
    }
    return 0;
}

