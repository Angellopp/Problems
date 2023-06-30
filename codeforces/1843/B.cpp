#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int tt; cin >> tt;
    int n, aux;
    while (tt--) {
        cin >> n;
        vector <ll> v;
        ll ans = 0, cont = 0;
        
        for (int i = 0; i < n ; i++) {
            cin >> aux;
            if (aux != 0) {
                v.push_back(aux);
            }
        }
        if (v.empty()) {
            cout << 0 << " " << 0 << "\n"; continue;
        }
        ans += abs(v[0]);
        if (v[0] < 0) cont++;
        
        for (int i = 1; i < v.size(); i++) {
            ans += abs(v[i]);
            if(v[i - 1] > 0 and v[i] < 0) {
                cont++;
            }
        }
        cout << ans << " " << cont << "\n";
    }
}