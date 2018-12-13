//http://codeforces.com/contest/919/submission/46534112

#include<bits/stdc++.h>
using namespace std;

int findSum(long long num){

    int sum=0;
    while (num != 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n;
    long long num=18;
    cin>>n;

    while(n){
        num++;
        if(10 == findSum(num))
            n--;
    }
    cout<<num;

    return 0;
}
