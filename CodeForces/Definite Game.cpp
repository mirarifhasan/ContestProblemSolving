#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v, x=1, i=1;
    cin>>v;

    while(1){
        x = v-i;
        if(x<2) break;
        else if(v%x != 0){
            v = v-x;
            i=1;
        }
        i++;
    }
    cout<<v;

    return 0;
}
