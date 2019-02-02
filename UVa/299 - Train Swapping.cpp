#include<stdio.h>

int main()
{
    int tc,i,j,num,temp;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){

        int ar[50], count, net=1;
        count=0;
        scanf("%d", &num);
        for(j=0; j<num; j++){
            scanf("%d", &ar[j]);
        }
        while(net != 0){
            for(j=0; j<num-1; j++){
                if(ar[j]>ar[j+1]){
                    temp = ar[j+1];
                    ar[j+1] = ar[j];
                    ar[j] = temp;
                    count++;
                }
            }
            net=0;
            for(j=0; j<num-1; j++){
                if(ar[j]>ar[j+1])
                    net++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }


    return 0;
}

