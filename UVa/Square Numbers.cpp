#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int a, b, cnt=0;

    cin>>a>>b;
    while(a!=0 && b!=0){
        for(int i=1; i*i<=b; i++){
            if(i*i>a || i*i==a) cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
        cin>>a>>b;
    }

    return 0;
}
