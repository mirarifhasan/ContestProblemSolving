#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d, m, y, dd, mm, yy, fine=0;
    cin>>d>>m>>y>>dd>>mm>>yy;

    if(yy>y){
        cout<<0<<endl;return 0;
    }
    else if(yy<y)fine = 10000*(y-yy);
    else if(mm>m){
        cout<<0<<endl;return 0;
    }
    else if(mm<m)fine += 500*(m-mm);
    else if(dd>d){
        cout<<0<<endl;return 0;
    }
    else if(dd<d) fine += 15*(d-dd);

    cout<<fine<<endl;
    return 0;
}
