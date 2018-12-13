//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2525

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, cnt, cas=1;
    string s;

    cin>>t;
    getchar();

    while(t--){
        getline(cin, s);

        i=0; cnt=0;

        int l = s.length()-1;

        while(i<=l){
            char c = s.at(i++);

            if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ') cnt++;
            else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x') cnt += 2;
            else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y') cnt += 3;
            else if(c=='s'||c=='z') cnt += 4;
        }
        cout<<"Case #"<<cas++<<": "<<cnt<<endl;
    }
    return 0;
}
