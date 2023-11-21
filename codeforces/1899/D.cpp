#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int tt, n, a[200000];
    map <int, int> mp;
    cin >> tt;
    while (tt--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = (1LL)*mp[1] * mp[2];
        for (const auto& par : mp) {
            if(par.second > 1) {
                ans += ((1LL)*par.second * (par.second - 1)) / 2;
            }
        }
        cout << ans << "\n";
        mp.clear();
    }
    
}