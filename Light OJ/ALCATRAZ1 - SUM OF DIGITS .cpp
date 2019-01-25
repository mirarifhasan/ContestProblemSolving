#include<bits/stdc++.h>
using namespace std;

int findchar(char c){
    if(c == '1') return 1;
    else if(c == '2') return 2;
    else if(c == '3') return 3;
    else if(c == '4') return 4;
    else if(c == '5') return 5;
    else if(c == '6') return 6;
    else if(c == '7') return 7;
    else if(c == '8') return 8;
    else if(c == '9') return 9;
    else if(c == '0') return 0;
}

int main()
{
    int t, l, temp, sum;
    char c;
    string s;
    cin>>t;

    while(t--){
        sum = 0;
        cin>>s;
        l = s.length();
        for(int i=0; i<l; i++){
            c = s.at(i);
            temp = findchar(c);
            sum += temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
