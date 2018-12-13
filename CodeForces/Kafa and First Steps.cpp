//http://codeforces.com/contest/580/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=1, temp=1;
    cin>>n;

    int ar[n];
    cin>>ar[0];
    for(int i=1; i<n; i++){
        cin>>ar[i];

        if(ar[i-1]<=ar[i])
            cnt++;

        if(temp<cnt)
                temp = cnt;
        else if(ar[i-1]>ar[i])
            cnt=1;
    }

    cout << temp;

    return 0;
}