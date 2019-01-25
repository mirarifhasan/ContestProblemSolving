#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt, temp;
    bool bb=false;
    cin>>n;
    int a[n], b[n];

    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];

    for(int i=0; i<n; i++){//b
        cnt=0; bb=false;

        for(int j=0; j<n && bb==false; j++){//a
            if(a[j] != 0){
                if(a[j] == b[i]){
                    bb = true;
                    temp=j;
                }

                cnt++;
                if(bb){
                    for(int i=0; i<=temp; i++)a[i]=0;
                    cout<<cnt;
                }
            }
        }
        if(!bb) cout<<0;
        if(i<n-1) cout<<" ";
    }

    return 0;
}
