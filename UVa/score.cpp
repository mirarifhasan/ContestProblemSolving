#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;

    while(t--){
        cin>>s;
        int sum = 0, cnt = 1;

        for(int i=0; i<s.size(); i++){
            if(s.at(i) == 'O')
                sum += cnt;
            else
                cnt = 0;

            if(i<s.size()-1 && s.at(i+1) == 'O')
                cnt++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
