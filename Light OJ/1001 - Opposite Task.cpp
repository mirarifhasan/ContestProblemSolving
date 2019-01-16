#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>t;

    while(t--){
            cin>>n;
        if(n<11)cout<<"0 "<<n<<endl;
        else cout<<"10 "<<n-10<<endl;
    }


    return 0;
}
