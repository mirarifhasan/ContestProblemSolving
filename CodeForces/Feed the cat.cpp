#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm, h, d, c, n;
    float currentNeed, afterNeed;
    cin>>hh>>mm>>h>>d>>c>>n;

    if(h%n==0) currentNeed = (h/n) * c;
    else currentNeed = ((h/n)+1) * c;

    if(hh>19){
        currentNeed *= 0.8;
        printf("%.4f", currentNeed);
        return 0;
    }

    int exmin = 59-mm+1; hh++;
    if(hh<20) exmin += (20-hh) * 60;
    h += d*exmin;

    if(h%n==0) afterNeed = (h/n) * c * 0.8;
    else afterNeed = ((h/n)+1) * c * 0.8;

    printf("%.4f", min(currentNeed, afterNeed));

    return 0;
}
