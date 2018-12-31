#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cnt=0, temp=0, n;
    cin>>n;
    cin>>s;

    int l = s.length();

    for(int i=0; i<l; i++){
        if(s.at(i)=='x')temp++;
        else temp=0;
        if(temp>=3)cnt++;
    }
    cout<<cnt;

    return 0;
}
