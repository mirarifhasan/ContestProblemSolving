#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=1;
    cin>>t;

    while(t--){
        int a, b, sum=0;
        cin>>a>>b;
        if(a>b) swap(a,b);
        if(a%2==0) a++;

        for( ; a<=b ; a+=2)
            sum+=a;
        cout<<"Case "<<i++<<": "<<sum<<endl;
    }
    return 0;
}
