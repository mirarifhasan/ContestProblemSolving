#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int testNumber=1 ; testNumber<=t ; testNumber++){
        long a;
        cin >> a;
        //long long sum=0;
        //sum = ((2*a-1)*(2*a)/2) - a*(a-1);
        cout<< "Case " << testNumber << ": "<< a*a <<endl;
    }
    return 0;
}
