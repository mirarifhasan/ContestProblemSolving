#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1=0, sum2=0, coin=0;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++)cin>>ar[i];
    sort(ar, ar+n);

    for(int i=n-1; i>-1; i--){
        sum1+=ar[i];
        coin++;

        for(int j=0; j<i; j++)sum2+=ar[j];

        if(sum1>sum2){
            cout<<coin;
            return 0;
        }else
            sum2=0;
    }
}
