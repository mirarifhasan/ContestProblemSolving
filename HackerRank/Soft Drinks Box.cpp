#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, g, cnt=0, temp;
    cin>>n>>b>>g;

    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp%b==0 || temp%g==0)cnt++;
    }

    cout<<cnt;

    return 0;
}
