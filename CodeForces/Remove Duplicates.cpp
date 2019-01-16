#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin>>n;
    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]==v[j]){
                v.erase(v.begin()+i);i--;
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size()-1; i++)cout<<v[i]<<" ";
    cout<<v[v.size()-1];

    return 0;
}
