#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt; cin>>tt;
    ll n;
    while(tt--){
        cin>>n;
        ll i=1,c=0,a1=0,a=0;
        while(i+c<n){
            if(i%4<2){
                a1+=i/2;
                a+=i;
            }
            c+=i; i++;
        }
        if(i%4<2){
            a+=n-(i*(i-1))/2;
            a1+=(n-(i*(i-1))/2)/2;
        }
        cout<<a-a1<<" "<<a1<<" "<<n-n/2+a1-a<<" "<<n/2-a1<<"\n";
    }
}