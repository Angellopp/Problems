#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll divi(ll n){
    ll c=0;
    for (ll d = 1; d*d <= n; ++d) {
        if (n % d == 0) {
            c++;
            if (d != n/d)  c++;
        }
    }return c;
}
int main(){
    ll n,aux; cin>>n>>aux;
    ll mcd=aux;
    while(n--){
        cin>>aux;mcd=__gcd(aux,mcd);
    }
    cout<<divi(mcd);
}
