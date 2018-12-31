#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int ar[n], ans=0;
    for(int i=0; i<n; i++) cin>>ar[i];

    sort(ar, ar+n);

    for(int i=n-1; i>-1; i--){
        k--;
        if(ar[i]==0) break;
        else if(k>=0) ans++;
        else if(ar[i+1]==ar[i]) ans++;
        else break;
    }

    cout<<ans;

    return 0;
}
