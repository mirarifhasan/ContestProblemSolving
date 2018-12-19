#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, temp;
    char c;
    cin>>t;

    while(t--){
        cin>>n>>k;
        temp=1;

        while(n--){
            c = 'a'-1+temp;

            temp++;
            if(temp>k) temp=1;

            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}
