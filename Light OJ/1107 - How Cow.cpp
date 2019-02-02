#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, tt=1, x1, x2, y1, y2, m1, m2, mt;
    bool b;
    cin>>t;

    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<tt++<<":"<<endl;
        cin>>mt;


        if(x1>x2)swap(x1, x2);
        if(y1>y2)swap(y1, y2);

        while(mt--)
        {
            cin>>m1>>m2;
            b = true;
            if(x1<=m1 && m1<=x2 && y1<=m2 && m2<=y2) b = false;

            if(!b) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}
