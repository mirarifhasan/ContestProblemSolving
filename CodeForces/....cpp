#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, s, ss, a;

    cin>>m>>s;
    ss = s;

    if(m==1 && s==0){
        cout<<"0 0"; return 0;
    }else if(9*m<s || s==0){
        cout<<"-1 -1"<<endl; return 0;
    }

    //find min
    int ar[m];
    for(int i=0; i<m; i++){
        a = ss - 9*(m-i-1);

        if(a<1 && i==0) ar[i]=1;
        else if(a<0) ar[i]=0;
        else ar[i] = a;

        ss-=ar[i];
    }
    for(int i=0; i<m; i++)cout<<ar[i];
    cout<<" ";

    //Find max
    ss = s;
    for(int i=0; i<m; i++){
        if(ss<10)ar[i]=ss;
        else ar[i]=9;
        ss-=ar[i];
    }
    for(int i=0; i<m; i++)cout<<ar[i];

    return 0;
}
