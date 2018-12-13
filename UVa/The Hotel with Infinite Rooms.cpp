#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s, d, temp, i;

    while(scanf("%lld %lld", &s, &d) != EOF){
        temp = s;
        i=0;

        while(temp<d){
            i++;
            temp = temp + s + i;
        }
        cout<<s+i<<endl;
    }
    return 0;
}
