//http://codeforces.com/contest/281/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s.at(0)>='a' && s.at(0)<='z'){
        s.at(0) -= 32;
    }
    cout<<s;

    return 0;
}
