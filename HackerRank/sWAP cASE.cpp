#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; char c;
    getline(cin,s);

    int l=s.length();

    for(int i=0; i<l; i++){
        c = s.at(i);
        if(c>='a' && c<='z'){
            c-=32;
            cout<<c;
        }
        else if(c>='A' && c<='Z'){
            c+=32;
            cout<<c;
        }
        else cout<<c;
    }


    return 0;
}
