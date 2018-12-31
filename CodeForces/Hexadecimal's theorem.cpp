#include<bits/stdc++.h>
using namespace std;

int findPrevFibo(int n){
    int a=0, b=1, temp;

    while(n>b-1){
        temp = a+b;
        a=b;
        b=temp;
    }
    return a;
}

int main()
{
    int n, prev, cnt=0, ar[]={0,0,0};
    cin>>n;

    while(n!=0){
        prev = findPrevFibo(n);
        ar[cnt] = prev;
        cnt++;
        n -= prev;
    }

    if(cnt>3) cout<<"I'm too stupid to solve this problem";
    else{
        for(int i=0; i<2; i++)cout<<ar[i]<<" ";
        cout<<ar[2];
    }

    return 0;
}
