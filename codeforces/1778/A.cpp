#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int tt;cin>>tt;
    while(tt--){
        ll n; cin>>n;
        ll* A=new ll[n]; ll c=0;
        for(ll i=0;i<n;i++){
            cin>>A[i]; c+=A[i];
        }
        ll* B=new ll[3]{};
        for(ll i=0;i<n-1;i++){
            if(A[i]+A[i+1]==-2) B[0]++;
            if(A[i]+A[i+1]==0) B[1]++;
            if(A[i]+A[i+1]==+2) B[2]++;
        }
        if(B[0]!=0){
            cout<<c+4<<"\n"; continue;
        }
        if(B[1]!=0){
            cout<<c<<"\n"; continue;
        }
        cout<<c-4<<"\n"; continue;
        
    }
}