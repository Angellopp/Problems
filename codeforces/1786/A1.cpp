#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt; cin>>tt;
    ll n;
    while(tt--){
        cin>>n;
        ll i=1,c=0,a=0;
        while(i+c<n){
            if(i%4<2)
                a+=i;
            c+=i; i++;
        }
        if(i%4<2){
            a+=n-(i*(i-1))/2;
        }
        cout<<a<<" "<<n-a<<"\n";
    }
}