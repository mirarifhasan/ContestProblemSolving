#include<bits/stdc++.h>
using namespace std;

int main(){
    long a, b, m, k;
    long long sum=0;

    while(scanf("%ld %ld",&a, &b) != EOF ){
        m=a; k=b; sum=0;
        if(a>b){
            long temp = a;
            a = b;
            b = temp;
        }
        sum = ((b*(b+1)) - (a*(a-1)))/2;

        printf("Sum of %ld to %ld is -> %lld;\n", a,b,sum);
    }
    return 0;
}
