#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, h, maxr=0, changer=0, cnt=0;
    int ar[10000+2] = {0};

    while(scanf("%d %d %d", &l, &h, &r) != EOF){
        if(maxr<r) maxr=r;

        cnt++;
        if(cnt>7) break;

        for(int i=l; i<r; i++){
            if(ar[i]<h)
                ar[i] = h;
        }
    }

    for(int i=0; i<maxr; i++){
        if(ar[i] != changer){
            cout<<i<<" "<<ar[i]<<" ";
            changer = ar[i];
        }
    }cout<<maxr<<" 0"<<endl;

    return 0;
}
