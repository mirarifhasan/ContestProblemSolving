#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;
    for(int i=1; i<=t; i++){
        int a, b;
        cin>>a>>b ;
        if(a<b){
            int temp = a;
            a = b;
            b = a;
        }
        if(a-b <10)
            cout<< "Case "<< i <<": "<< (10*(a+b))+(a-b) <<endl;
        else
            cout<< "Case "<< i <<": "<< (100*(a+b))+(a-b) <<endl;
    }
    return 0;
}
