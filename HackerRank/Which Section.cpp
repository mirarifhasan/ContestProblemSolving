//https://www.hackerrank.com/contests/w38/challenges/which-section
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, m;
    cin>>t;

    while(t--){
        cin>>n>>k>>m;

        int ar[m];
        for(int i=0; i<m; i++)cin>>ar[i];

        for(int i=0; i<m; i++){
            k -= ar[i];
            if(k<1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
