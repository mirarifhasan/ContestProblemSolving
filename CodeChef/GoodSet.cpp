#include<bits/stdc++.h>
using namespace std;

int main()
{
int t, n, temp;
cin>>t;

while(t--){
    cin>>n;
    temp=1;
    for(int i=1; i<n; i++){
        cout<<temp<<" ";
        temp+=2;
    }cout<<temp<<endl;
}
return 0;
}
