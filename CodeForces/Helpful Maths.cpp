#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int l = s.length(), c;
    vector<int> v;

    for(int i=0; i<l; i=i+2){
        c = s.at(i) - '0';
        v.push_back(c);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-1; i++){
        cout<<v[i]<<"+";
    }cout<<v[v.size()-1];


    return 0;
}
