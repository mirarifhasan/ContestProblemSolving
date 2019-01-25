#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int x = n-1;
    int res = n;
    for(int i=1; i<n; i++){
        res += x + (x-1)*i;
        x--;
    }
    cout<<res;

    return 0;
}
