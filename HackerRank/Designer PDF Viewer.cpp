#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[26], c, m=0;
    string s;
    vector<int>v;

    for(int i=0; i<26; i++)cin>>ar[i];
    cin>>s;

    for(int i=0; i<s.length(); i++){
        c = s.at(i);
        c -= 'a';
        v.push_back(ar[c]);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]>m)m=v[i];
    }
    cout<<m*s.size();

    return 0;
}
