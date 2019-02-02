#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, n, s, cnt=0;
    cin>>r>>n>>s;

    int ar[r];

    for(int i=0; i<r; i++) cin>>ar[i];

    n = n*s;
    s=0;

    sort(ar, ar+r);

    for(int i=r-1; i>=0; i--){
        if(n>s){
            s += ar[i];
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}
