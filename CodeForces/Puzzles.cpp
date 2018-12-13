//http://codeforces.com/problemset/problem/337/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, minn = INT_MAX, temp;
    cin>>n>>m;

    int ar[m];
    for(int i=0; i<m; i++)cin>>ar[i];

    sort(ar, ar+m);

    for(int i=0; i<=m-n; i++){
        temp = ar[i+n-1]-ar[i];
        if(temp<minn) minn=temp;
    }
    cout<<minn<<endl;
    return 0;
}
