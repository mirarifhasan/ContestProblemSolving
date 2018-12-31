#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        string s;
        cin>>s;

        sort(s.begin(), s.end());
        if(s.at(0)==s.at(s.length()-1))cout<<"-1"<<endl;
        else cout<<s<<endl;
    }
    return 0;
}
