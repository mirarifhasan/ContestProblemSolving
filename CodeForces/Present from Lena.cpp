#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int sp=n-i; sp>0; sp--)cout<<"  ";
        for(int num=0; num<=i; num++){
            if(i==0) cout<<num;
            else cout<<num<<" ";
        }
        if(i>0){
            for(int remun=i-1; remun>0; remun--){
                cout<<remun<<" ";
            }cout<<0;
        }cout<<endl;
    }
    for(int i=n-1; i>=0; i--){
        for(int sp=n-i; sp>0; sp--)cout<<"  ";
        for(int num=0; num<=i; num++){
            if(i==0) cout<<num;
            else cout<<num<<" ";
        }
        if(i>0){
            for(int remun=i-1; remun>0; remun--){
                cout<<remun<<" ";
            }cout<<0;
        }cout<<endl;
    }

    return 0;
}
