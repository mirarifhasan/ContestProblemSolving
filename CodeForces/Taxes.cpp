//http://codeforces.com/problemset/problem/735/D
#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int a)
{
    long long int t = sqrt(a);
    for(int i=2; i<=t; i++){
        if(a%i==0) return false;
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;

    if(n<4) cout<<1;
    else if(isPrime(n)) cout<<1;
    else if(n%2==0) cout<<2;
    else{
        if(isPrime(n-2)) cout<<2;
        else cout<<3;
    }

    return 0;
}
