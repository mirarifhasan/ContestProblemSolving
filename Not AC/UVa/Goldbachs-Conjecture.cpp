#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    bool b;

    while(cin>>n){
        if(n==0)return 0;

        bool prime[n+1];
        memset(prime, true, sizeof(prime));

        for (int p=2; p*p<=n; p++) {
            if (prime[p] == true) {
                for (int i=p*p; i<=n; i += p)
                    prime[i] = false;
            }
        }

        b = true;
        for(int i=2; i<=n; i++){
            if(prime[i]){
                for(int j=2; j<=n; j++){
                    if(prime[j]){
                        if(n == i+j){
                            cout<<n<<" = "<<i<<" + "<<j<<endl;
                            b = false;
                            break;
                        }
                    }
                }
                if(!b) break;
            }
        }

    }

    return 0;
}
