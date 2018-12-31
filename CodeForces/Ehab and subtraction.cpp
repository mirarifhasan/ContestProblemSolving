#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    long long int ar[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    sort(ar, ar+n);

    cout<<ar[0]<<endl; k--;
    for(int i=0; i<n-1 && k>0; i++){
        if(ar[i+1]>ar[i]){
            cout<<ar[i+1]-ar[i]<<endl;
            k--;
        }
    }
    while(k--)cout<<0<<endl;

    return 0;
}
