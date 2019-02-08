#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev=0, rem, m;
    bool b, c;

    while(scanf("%d", &n) != EOF){
        b = true;
        c = true;

        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                b=false; break;
            }
        }

        if(!b){
            cout<<n<<" is not prime."<<endl;
        }
        else{
                m=n;
            while(n!=0){
                 rem=n%10;
                 rev=rev*10+rem;
                 n/=10;
            }
            for(int i=2; i*i<=rev; i++){
                if(rev%i==0) c=false;
            }
            if(c)cout<<m<<" is emirp."<<endl;
            else cout<<m<<" is prime."<<endl;
        }

    }



    return 0;
}
