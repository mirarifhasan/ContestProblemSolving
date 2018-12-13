//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3135

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=1;
    float c, df;
    cin>>t;

    while(t--){
        cin>>c>>df;

        c += (df)*(5.0/9.0);

        printf("Case %d: %.2f\n", i++, c);
    }

    return 0;
}
