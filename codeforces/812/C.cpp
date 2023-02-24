#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f(ll* a, ll n, ll k){
    ll* b=new ll[n];
    for(ll i=0;i<n;i++){
        b[i]=a[i]+(i+1)*k;
    }
    sort(b,b+n);
    ll sum=0;
    for(ll i=0;i<k;i++)
        sum+=b[i];
    return sum;
}

ll lb(ll* a, ll n, ll s){
    ll l=0,r=n;
    while(l<r){
        ll mid=l+(r-l+1)/2;
        if(f(a,n,mid)<=s) l=mid;
        else r=mid-1;
    }
    return f(a,n,l)<=s?l:-1;
}

int main(){
    ll n,s;cin>>n>>s;
    ll* a=new ll[n];
    ll* b=new ll[n+1];
    for(ll i=0;i<n;i++)  cin>>a[i];
    ll ind=lb(a,n,s);
    cout<<ind<<" "<<f(a,n,ind);
}