//http://codeforces.com/contest/946/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, sum=0;
    cin>>t;

    while(t--){
        cin>>n;
        if(n>0) sum+=n;
        else sum-=n;
    }
    cout<<sum;

    return 0;
}
