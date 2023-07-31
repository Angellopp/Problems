#include <bits/stdc++.h>
#include <numeric>

#define ll long long
 
using namespace std;
 
ll divi (ll n) {
    ll c = 0;
    for (ll d = 1; d*d <= n; ++d) {
        if (n % d == 0) {
            c++;
            if (d != n/d)  
                c++;
        }
    }
    return c;
}
int main(){
    int n; 
    ll aux; 
    cin >> n >> aux;
    ll mcd = aux;
    while (n--) {
        cin >> aux;
        mcd = gcd(aux, mcd);
    }
    cout << divi(mcd);
    return 0;
}