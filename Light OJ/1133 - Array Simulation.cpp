#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, cas=1;
    char c;
    cin>>t;

    while(t--){
        cin>>n>>m;

        int ar[n];
        for(int i=0; i<n; i++)cin>>ar[i];


        while(m--){

            cin>>c;

            if(c=='S'){
                int d;
                cin>>d;
                for(int i=0; i<n; i++) ar[i]=ar[i]+d;
            }
            else if(c=='M'){
                int d;
                cin>>d;
                for(int i=0; i<n; i++) ar[i]=ar[i]*d;
            }
            else if(c=='D'){
                int k;
                cin>>k;
                for(int i=0; i<n; i++) ar[i]=ar[i]/k;
            }
            else if(c=='R'){
                for(int i=0, j=n-1; i<j; i++, j--){
                    swap(ar[i], ar[j]);
                }
            }
            else if(c=='P'){
                int y, z;
                cin>>y>>z;

                swap(ar[y], ar[z]);
            }
        }

        cout<<"Case "<<cas<<":"<<endl;
        for(int i=0; i<n-1; i++){
            cout<<ar[i]<<" ";
        }cout<<ar[n-1]<<endl;

        cas++;

    }

    return 0;
}
