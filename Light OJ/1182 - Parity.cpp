#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cnt, tt=1;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cnt=0;
        while(n>0){
            if(n%2==1)cnt++;
            n=n/2;
        }
        if(cnt%2==0) cout<<"Case "<<tt++<<": even"<<endl;
        else cout<<"Case "<<tt++<<": odd"<<endl;
    }
    return 0;
}
