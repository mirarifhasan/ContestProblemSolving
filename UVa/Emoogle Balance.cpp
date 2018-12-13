//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3431

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, z, nz, temp, i=1;

    while(i){
        z=0; nz=0;
        cin>>t;

        if(t==0) return 0;

        while(t--){
            cin>>temp;
            if(temp==0) z++;
            else nz++;
        }
        cout<<"Case "<<i++<<": "<<nz-z<<endl;
    }

    return 0;
}
