#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, i=1, temp, aa, bb;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;

        temp = max(a, b);
        temp = max(temp, c);

        if(temp == c){
            aa = a;
            bb = b;
        }else if(temp == b){
            aa = a;
            bb = c;
        }else{
            bb = b;
            aa = c;
        }

        if(aa*aa + bb*bb == temp*temp) cout<<"Case "<<i++<<": yes"<<endl;
        else cout<<"Case "<<i++<<": no"<<endl;
    }

    return 0;
}
