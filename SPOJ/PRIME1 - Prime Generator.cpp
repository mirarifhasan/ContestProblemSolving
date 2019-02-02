#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,t;
    cin>>t;

    while(t--){
        cin>>m>>n;
        if(m==1)m++;
        while(m<=n){
            bool b=true;
            for(int i=2; i*i<=m; i++){
                if(m%i*i==0){
                    b=false;
                    break;
                }
            }
            if(b) cout<<m<<endl;
            m++;
        }
        cout<<endl;
    }
    return 0;
}
