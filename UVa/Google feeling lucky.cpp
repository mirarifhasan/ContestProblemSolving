//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166

#include<bits/stdc++.h>
using namespace std;

struct node{
    string str;
    int a;
}ar[10];

int main()
{
    int t, c=1, m, k=1;
    cin>>t;

    while(t--)
    {
        m=0;
        for(int i=0; i<10; i++){
            cin>>ar[i].str>>ar[i].a;
            if(ar[i].a > m)
                m = ar[i].a;
        }

        cout<<"Case #"<<c++<<":"<<endl;
        for(int i=0; i<10; i++){
            if(ar[i].a == m)
                cout<<ar[i].str<<endl;
        }
    }

    return 0;
}
