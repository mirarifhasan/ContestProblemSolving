#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int l, int r, int x)
{
    int y;
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (ar[mid] == x)
            return ar[mid];

        if (ar[mid] > x){
            if(ar[mid]-x > x-ar[mid-1]) y = ar[mid-1];
            else y = ar[mid];
            return binarySearch(ar, l, mid - 1, x);
        }
        if(x-ar[mid] > ar[mid+1]-x) y = ar[mid+1];
        else y = ar[mid];
        return binarySearch(ar, mid + 1, r, x);
    }

    return y;
}

int main()
{
    int n, t, x, pred, post, y, z, l, r;
    cin>>n>>t;

    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];

    sort(ar, ar+n);

    while(t--){
        cin>>x;

        if(x >= ar[n-1]) y = ar[n-1];

        else if(x <= ar[0]) y = ar[0];

        int y = binarySearch(ar, 0, n-1, x);


        /*else{
            pred=0;
            for(int i=1; i<n; i++){
                if(ar[i]>=x){
                    post=i;
                    if(i>0)pred=i-1;
                    break;
                }
            }

            l = x - ar[pred];
            r = ar[post] - x;

            if(l<r) y = ar[pred];
            else y = ar[post];
        }*/
        z = max(x, y) - min(x, y);

        cout<<z<<endl;
    }

    return 0;
}
