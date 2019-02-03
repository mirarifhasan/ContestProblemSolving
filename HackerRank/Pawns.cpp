#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin>>n>>m;

    if(n%2==0 && m%2==0){
        cout<<(n/2)*m;
    }
    else if(n%2==1 && m%2==1){
        if(n>m) swap(n, m);
        cout<<((n/2)+1)*m;
    }
    else{
        if(n%2==1){
            a=n;
            b=m;
        }else{
            a=m;
            b=n;
        }
        cout<<((a/2)+1)*b;
    }

    /*if(n>m) swap(n, m);

    int c = n%2;

    cout<<((n/2)+c)*m<<endl;*/

    return 0;
}
