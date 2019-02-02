#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, temp, cnt;

    while(scanf("%d %d",&a, &b)!=EOF)
    {
        cout<<a<<" "<<b<<" ";
        if(a>b)swap(a, b);

        n=a;
        int m = 1;

        int ar[b+1];

        while(n<=b)
        {
            temp = n;
            cnt=1;

            while(temp > 1)
            {
                if(temp%2==0) temp = temp/2;
                else temp = 3*temp + 1;
                cnt++;
            }
            ar[n]=cnt;
            n++;
        }

        for(int i=a; i<=b; i++)
            if(m<ar[i]) m = ar[i];

        cout<<m<<endl;
    }
    return 0;
}
