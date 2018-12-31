#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, even=0, odd=0;
    cin>>n>>b;

    int ar[n];
    vector<int> v;

    for(int i=0; i<n; i++) cin>>ar[i];

    for(int i=0; i<n; i++){
        if(ar[i]%2==0)even++;
        else odd++;

        if(even==odd && i+1!=n)
            v.push_back(abs(ar[i]-ar[i+1]));
    }

    sort(v.begin(), v.end());

    int sum=0, cut=0;
    for(int i=0; i<v.size(); i++)
        if(sum+v[i] <= b){
            sum+=v[i];
            cut++;
        }else break;

    cout<<cut;

    return 0;
}
