//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1872

#include <iostream>
using namespace std;

int main()
{
    int a[1000], n, i, c;

    while(1){
        cin>>n;
        c=0;

        if(n==0) return 0;

        for(i=0; n>0; i++){
            a[i]=n%2;
            if(a[i]==1) c++;
            n= n/2;
        }

        cout<<"The parity of ";
        for(i=i-1; i>=0 ;i--){
            cout<<a[i];
        }
        cout<<" is "<<c<<" (mod 2)."<<endl;
    }
}
