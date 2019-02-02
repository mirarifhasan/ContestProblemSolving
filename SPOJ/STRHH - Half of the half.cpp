#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, l;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        l = (s.size()/2)-1;

        for(int i=0; i<=l; i=i+2)
            cout<<s.at(i);
        cout<<endl;
    }

    return 0;
}
