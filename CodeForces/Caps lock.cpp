#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int l=s.length(), cap=0;
    for(int i=0; i<l; i++)
        if(s.at(i)>='A' && s.at(i)<='Z') cap++;

    char c = s.at(0);
    if(cap==l || (cap==l-1 && c>='a' && c<='z')){

        for(int i=0; i<l; i++){
            c = s.at(i);
            if(c>='A' && c<='Z'){
                c+=32;
                cout<<c;
            }else if(c>='a' && c<='z'){
                c-=32;
                cout<<c;
            }
        }
    }
    else cout<<s;

    return 0;
}
