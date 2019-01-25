//https://toph.co/p/calculate-the-sum-if-you-can
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t, sum, n;
    cin>>t;

    while(t--){
        cin>>n;

        if(n%2==0)
            sum = -n/2;
        else
            sum = (-n/2) + 1;
        cout<<sum<<endl;
    }

    return 0;
}
