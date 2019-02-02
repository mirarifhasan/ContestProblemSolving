#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, l, c, r, tc;

    cin>>t;

    while(t--){
        cin>>l>>c;
        r = 1;
        tc = 1;

        for( ; r<=l; r++){
            tc = 1;
            if(r%2==1){
                for( ; tc<=c; tc++){
                    cout<<"*";
                    tc++;
                    if(tc<=c) cout<<".";
                }cout<<endl;
            }
            else{
                for( ; tc<=c; tc++){
                    cout<<".";
                    tc++;
                    if(tc<=c) cout<<"*";
                }cout<<endl;
            }
        }cout<<endl;
    }


    return 0;
}
