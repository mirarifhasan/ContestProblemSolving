#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, ct=-10, dj=0;
    cin>>n>>d;
    int ar[n];

    for(int i=0; i<n; i++){
        cin>>ar[i];
        ct+=ar[i]+10;
    }
    if(ct>d){
        cout<<"-1";
        return 0;
    }

    d -= ct;
    dj = (n-1)*2;
    dj += d/5;

    cout<<dj;

    return 0;
}
