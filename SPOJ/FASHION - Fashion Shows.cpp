#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t, m, sum=0, n;

    cin>>t;
    while(t--){
        sum=0;
        cin>>m;
        long ar[m], arr[m];

        for(int i=0; i<m; i++)
            cin>>ar[i];
        for(int i=0; i<m; i++)
            cin>>arr[i];

        sort(ar, ar+m);
        sort(arr, arr+m);

        for(int i=0; i<m; i++){
            sum += ar[i]*arr[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
