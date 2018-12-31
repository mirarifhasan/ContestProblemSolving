#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; double sum=0, ans;
    cin>>n;

    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    ans = sum/n;
    if(ans>=4.5){
        cout<<"0";
        return 0;
    }
    sort(ar, ar+n);

    for(int i=0; i<n; i++){
        ar[i]=5; sum=0;

        for(int j=0; j<n; j++)
            sum+=ar[j];
        ans = sum/n;
        if(ans>=4.5){
            cout<<i+1;
            return 0;
        }
    }

    cout<<"prob";
    return 0;
}
