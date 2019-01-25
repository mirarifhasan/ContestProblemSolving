//https://toph.co/p/lowercase-or-uppercase
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    for(int j=1; j<=t; j++)
    {
        string s;
        cin>>s;
        //getline(cin, s);

        int upper=0, lower=0, l=s.length();
        //cout<<s<<" "<<l<<endl;
        for(int i=0 ; i<l; i++ ){
            if('a'<=s.at(i) &&  'z'>= s.at(i))
                lower++;
            else if('A'<=s.at(i) && 'Z'>= s.at(i))
                upper++;
            else{
                lower++;
                upper++;
            }
        }

        if(upper>lower)
            cout<<"Case "<<j<<": "<<lower<<endl;
        else
            cout<<"Case "<<j<<": "<<upper<<endl;
    }
    return 0;
}
