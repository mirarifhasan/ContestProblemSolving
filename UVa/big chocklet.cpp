#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a, b, c=0, cnt=0;

    while(scanf("%d %d", &m, &n) != EOF)
    {
        cnt = 0;
        c = 0;
        while(m!=0 || n!=0)
        {
            a = (m%10) + c;
            m = m/10;
            c = 0;

            b = n%10;
            n = n/10;

            if(a+b>9){
                cnt++;
                c = 1;
            }
        }
        if(cnt==0)cout<<"No carry operation."<<endl;
        else cout<<cnt<<" carry operations."<<endl;
    }

    return 0;
}
