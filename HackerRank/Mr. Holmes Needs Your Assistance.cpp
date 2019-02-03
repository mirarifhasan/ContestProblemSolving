#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    cin>>s1>>s2;

    int l1, l2;
    l1 = s1.length();
    l2 = s2.length();

    if(l1 == l2){
        cout<<"No spies were found!"<<endl;
        return 0;
    }
    else{
        for(int j=0, i=0; j<l2 || i<l1; j++, i++){
            if(s1[i] != s2[j]){
                cout<<s2[j];
                i--;
            }
        }
    }

    return 0;
}
