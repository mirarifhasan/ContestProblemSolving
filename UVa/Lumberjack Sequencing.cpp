#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ar[10], c;
    cin>>n;

    cout<<"Lumberjacks:"<<endl;

    while(n--){
        c=0;
        for(int i=0; i<10; i++) cin>>ar[i];

        for(int i=0; i<9; i++){
            if(ar[i]<ar[i+1]) c++;
            else c = c+2;
        }

        if(c==9 ||c==18)
            cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }


    return 0;
}
