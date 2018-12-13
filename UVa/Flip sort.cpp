#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, i;

    while(scanf("%d", &n) != EOF)
    {
        int ar[n];
        for(i=0; i<n; i++)
            cin>>ar[i];

        m=0;
        i=0;
        while(1){
            if(i!=n-1 && ar[i]<=ar[i+1]){
                i++;
            }
            else if(i!=n-1 && ar[i]>ar[i+1]){
                swap(ar[i], ar[i+1]);
                m++;
                i=0;
            }
            else
                break;
        }
        cout<<"Minimum exchange operations : "<<m<<endl;
    }

    return 0;
}
