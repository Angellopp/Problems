#include <bits/stdc++.h>
typedef long long ll; 
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll k, p; cin >> k >> p;
    ll rpta = 0;
    for(int i = 1; i <= k; i++) {
        ll aux = i, n = i;
        while(aux != 0) {
            ll dig = aux % 10;
            n = n * 10 + dig;
            aux /= 10;
        }
        rpta = (rpta + n % p) % p;
    }
    cout << rpta;
}