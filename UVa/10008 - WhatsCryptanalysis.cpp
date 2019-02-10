#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, ar[26]={0}, len, temp, m=1, ind;
    string s;
    char c;

    cin>>t;
    getchar();

    while(t--){
        getline(cin, s);
        //getchar();

        len = s.size();
        for(int i=0; i<len; i++){
            if(s[i]>='a' && s[i]<='z'){
                temp = s[i] - 'a';
                ar[temp]++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                temp = s[i] - 'A';
                ar[temp]++;
            }
        }
    }

    while(m!=0){
        m=0;
        for(int i=25; i>-1; i--){
            if(ar[i]>=m){
                m = ar[i];
                ind = i;
            }
        }
        c = 'A'+ind;
        if(m>0)cout<<c<<" "<<ar[ind]<<endl;
        ar[ind] = 0;
    }

    return 0;
}
