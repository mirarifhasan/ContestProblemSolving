#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int l = s.length();
    int le, ri;

    if(l%2==0){
        cout<<s[(l/2)-1];
        le = (l/2)-2;
        ri = l/2;
    }
    else{
        cout<<s[l/2];
        le = (l/2)-1;
        ri = (l/2)+1;
    }

    while(ri<l){
        cout<<s[ri++];

        if(le>-1)cout<<s[le--];
    }


    return 0;
}
