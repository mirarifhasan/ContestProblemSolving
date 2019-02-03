#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;

    if(l>r)
        swap(l,r);

    long long ans=1;

    for(int i = l ; i<=r ; i++)
    {
        ans*=i;
    }

    bool prime[ans+1];

    memset(prime,true,sizeof(prime));

    for(long long j = 2 ; j*j<=ans ; j++)
    {
        if(prime[j] == true)
        {
            for(long long k = j*j ; k<=ans ; k=k+j)
            {
                prime[k] = false;
            }
        }
    }

    long counter = 1;

    for(long long i = 2 ; i<=ans ; i++)
    {
        if(prime[i]==true)
        {
            if(ans%i!=0)
                counter++;
        }

    }
    cout<<counter<<endl;



    return 0;
}
