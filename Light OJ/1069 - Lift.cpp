#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, tt=1, mp, lp, time=0;
    cin>>t;

    while(t--)
    {
        cin>>mp>>lp;
        time = mp*4 + 10 + 9 + abs(mp-lp)*4;

        cout<<"Case "<<tt++<<": "<<time<<endl;
    }

    return 0;
}

