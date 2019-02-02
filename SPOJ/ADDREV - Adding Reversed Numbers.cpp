#include<bits/stdc++.h>
using namespace std;

int rev(int a)
{
    int res=0, rem;

    while(a!=0){
        rem = a%10;
        a = a/10;
        res = res*10 + rem;
    }
    return res;
}

int main()
{
    int a, b, t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        a = rev(a)+rev(b);
        cout<<rev(a)<<endl;
    }
    return 0;
}
