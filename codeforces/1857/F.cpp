#include <bits/stdc++.h>
#define ll long long
const int MOD = 1e9+7;
const int MAX = 1e6+5;
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n, aux;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            mp[aux]++;
        }
        ll q, x, y;
        cin >> q;
        for (int i = 0; i < q; i++) {
            cin >> x >> y;
            ll ans = 0;
            // if (x * x < 4 * y) {
            //     cout << "0\n";
            //     continue;
            // }
            ll sq = sqrt(x * x - 4 * y);
            if (sq * sq != x * x - 4 * y or (x - sq) % 2 != 0) {
                cout << "0 ";
                continue;
            } else {
                if (mp[(x-sq)/2] and mp[(x+sq)/2]) {
                    if (sq == 0) {
                        ans = 1LL * mp[x/2] * (mp[x/2] - 1) / 2;
                    }
                    else 
                        ans += 1LL * mp[(x-sq)/2] * mp[(x+sq)/2];
                    // cout << "\n" <<mp[(x-sq)/2] << " " << mp[(x+sq)/2] << " \n";
                }
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
}
