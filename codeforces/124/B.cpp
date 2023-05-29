#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n, k; cin >> n >> k;
    char m[8][8], ind[8];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
            cin >> m[i][j];
    for(int i = 0; i < k; i++) 
        ind[i] = i;
    ll rpta = 1e9+10;
    do{
        ll mx = 0, mn = 1e9+10; 
        for (int i = 0; i < n; i++) {
            ll x = 0;
            for (int j = 0; j < k; j++) {
                x = x * 10 + (m[i][ind[j]]-'0');
            }
            // cout<<":>"<<x<<":asd\n";
            mx = max(x, mx);
            mn = min(x, mn);
        }
        rpta = min(rpta, mx - mn);
    }
    while(next_permutation(ind,ind + k));
    cout << rpta;
    
}