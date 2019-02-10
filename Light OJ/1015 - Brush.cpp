#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=1, tt, sum=0, temp;
    cin>>t;

    while(t--){
        sum = 0;
        cin>>tt;
        while(tt--){
            cin>>temp;
            if(temp>0)
                sum += temp;
        }
        cout<<"Case "<<i++<<": "<<sum<<endl;
    }

    return 0;
}
