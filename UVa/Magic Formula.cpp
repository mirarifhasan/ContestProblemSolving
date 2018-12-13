#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, l, res, cnt;

    while(1){
        cin>>a>>b>>c>>d>>l;

        if(a==0 && b==0 && c==0 && d==0 && l==0)
            return 0;

        cnt=0;
        for(int i=0; i<=l; i++){
            res = a*i*i + b*i + c;

            if(res%d==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }



    return 0;
}
