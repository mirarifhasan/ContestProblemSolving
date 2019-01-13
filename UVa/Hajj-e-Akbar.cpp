#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; int i=1;
    while(1){
        cin>>s;
        if(s.compare("Hajj")==0) cout<<"Case "<<i++<<": Hajj-e-Akbar"<<endl;
        else if(s.compare("Umrah")==0) cout<<"Case "<<i++<<": Hajj-e-Asghar"<<endl;
        else return 0;
    }
}
