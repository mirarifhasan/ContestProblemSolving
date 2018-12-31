#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int ar[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    sort(ar, ar+n);

    for(int i=0; i<n-2; i++){
        if(ar[i+2]<ar[i]+ar[i+1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}
