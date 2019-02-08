#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, str;
    bool b;
    int l, d, sum=0, x;

    while(cin>>s){
        l=s.size();

        b = true;
        sum = 0;

        for(int i=0; i<l; i++){
            if(s[i]>='a' && s[i]<='z') d = s[i] - 'a' + 1;
            else d = s[i] - 'A' + 27;
            stringstream ss;
            ss << d;
            str = ss.str();
            stringstream geek(str);
            geek >> x;
            sum += x;
            str="";
        }


        for(int i=2; i*i<=sum; i++){
            if(sum%i==0)b=false;
        }

        if(b) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;

    }

    return 0;
}
