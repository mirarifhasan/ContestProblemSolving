#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, res;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a==b && a%2==0)
            cout<<"0"<<endl;
        else if(a>b && a%2==0 && b%2==0)
            cout<<(a-b)/2<<endl;
        else if(a<b && a%2==0 && b%2==0)
            cout<<(b-a)/2<<endl;
        else if(a>b)
            cout<<((a-b+2)/2)<<endl;
        else
            cout<<((b-a+2)/2)<<endl;
    }

    return 0;
}
