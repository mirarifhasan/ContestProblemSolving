#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans;
    cin>>a>>b;

    for(int i=0; i<b; i++){
        cin>>c;
        if(a==c)ans=i;
    }
    cout<<ans;

    return 0;
}
