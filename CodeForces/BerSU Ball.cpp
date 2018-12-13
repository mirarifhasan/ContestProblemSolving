//http://codeforces.com/problemset/problem/489/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, g, np=0, inb=0, ing=0;

    cin>>b;
    int arb[b];
    for(int i=0; i<b; i++) cin>>arb[i];
    sort(arb, arb+b);

    cin>>g;
    int arg[g];
    for(int i=0; i<g; i++) cin>>arg[i];
    sort(arg, arg+g);

    while(inb<b && ing<g){
        if(arb[inb] == arg[ing] || arb[inb] - arg[ing] == 1 || arb[inb] - arg[ing] == -1){
            inb++; ing++; np++;
        }
        else if(arb[inb]>arg[ing]){
            ing++;}
        else{
            inb++;}
    }
    cout<<np<<endl;
    return 0;
}
