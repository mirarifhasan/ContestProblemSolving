#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, p, q, counter=0, j=1, sum;
    cin>>t;

    while(j<=t)
    {
        counter=0, sum=0;
        cin>>n>>p>>q;
        int ar[n];

        for(int i=0; i<n; i++)
            cin>>ar[i];

        for(int i=0;  i<n; i++)
        {
            if(counter<p && sum+ar[i]<=q)
            {
                counter++;
                sum += ar[i];
            }
            else
                break;
        }
        cout<<"Case "<<j<<": "<<counter<<endl;
        j++;
    }

    return 0;
}
