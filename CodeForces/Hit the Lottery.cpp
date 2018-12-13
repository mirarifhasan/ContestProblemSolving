//http://codeforces.com/problemset/problem/996/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, note=0;
    cin>>n;

    note = n/100;
    n = n%100;

    note += n/20;
    n = n%20;

    note += n/10;
    n = n%10;

    note += n/5;
    n = n%5;

    note += n/1;

    cout<<note<<endl;

    return 0;
}
