//https://codeforces.com/problemset/problem/1092/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, res=0;
    cin>>n;

    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];

    sort(ar, ar+n);

    for(int i=0; i<n; i=i+2){
        res += ar[i+1]-ar[i];
    }
    cout<<res;

    return 0;
}
