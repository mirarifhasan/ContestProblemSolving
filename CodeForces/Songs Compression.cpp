#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, suma=0, sumb=0, cnt=0, a, b;
    cin>>n>>m;
    long long int ar[n];

    for(int i=0; i<n; i++){
        cin>>a>>b;
        ar[i] = a-b;
        suma+=a;
        sumb+=b;
    }
    if(suma<=m){
        cout<<"0";
        return 0;
    }else if(sumb>m){
        cout<<"-1";
        return 0;
    }

    sort(ar, ar+n);
    for(int i=n-1; i>-1; i--){
        suma-=ar[i];
        cnt++;
        if(suma<=m){
            cout<<cnt;
            return 0;
        }
    }
}
