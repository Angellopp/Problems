#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
    ll n,m; cin>>n>>m;
    int q; cin>>q;
    int sx,ex; ll sy,ey;
    ll mcd=__gcd(n,m);
    ll a=n/mcd, b=m/mcd;
    while(q--){
        cin>>sx>>sy>>ex>>ey;
        ll a1,b1;
        if(sx==1) a1=(sy-1)/a;
        else a1=(sy-1)/b;
        if(ex==1) b1=(ey-1)/a;
        else b1=(ey-1)/b;
        (a1==b1)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}