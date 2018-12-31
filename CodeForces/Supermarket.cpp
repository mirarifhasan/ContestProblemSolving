#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    double a, b, res=INT_MAX;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        res = min(res, (a/b));
    }res = res*m;

    printf("%.8f", res);

    return 0;
}
