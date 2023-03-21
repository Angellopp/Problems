#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt,n,q,l,r,k,c; cin>>tt;
    while(tt--){
        cin>>n>>q;
        int* a=new int[n];
        bool* b=new bool[n+2]{};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i+1]=(b[i]+a[i])%2;
        }
        for(int i=0;i<q;i++){
            cin>>l>>r>>k;
            c=(b[n]+b[r]-b[l-1]+(r-l+1)*k+2)%2;
            (c%2)?cout<<"YES\n":cout<<"NO\n";
        }
        delete a;
    }
    return 0;
}