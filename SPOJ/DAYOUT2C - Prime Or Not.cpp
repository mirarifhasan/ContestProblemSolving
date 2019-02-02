
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, i;
    bool isPrime = true;
    cin >> T;
    long long N;
    for(int k=0; k<T; k++)
    {
        cin>>N;
        isPrime = true;
        for(i = 2; i*i <= N; ++i)
        {
            if(N% i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout <<N<<" is a prime"<<endl;
        else
            cout <<N<<" is not a prime"<<endl;
    }
    return 0;
}
