#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int tt, n;
    cin >> tt;
    int a[150000];
    while (tt--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        for (int i = 1; i*i <= n; i++) {
            ll dif = 0;
            if (n % i == 0) {
                ll sum = 0, mx = 0, mn = 1e9*150000;
                for (int j = 0; j < n; j+=i) {
                    sum = 0;
                    for (int z = j; z < j + i; z++) {
                        sum += a[z];
                    }
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                    // cout << "sum: " << sum << " max: " << mx << " min: " << mn << "\n";
                    dif = mx - mn;
                }
                if (i*i != n and i != 1) {
                    int d = n/i;
                    sum = 0, mx = 0, mn = 1e9*150000;
                    for (int j = 0; j < n; j+=d) {
                        sum = 0;
                        for (int z = j; z < j + d; z++) {
                            sum += a[z];
                        }
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        // cout << "sum: " << sum << " max: " << mx << " min: " << mn << "\n";
                        dif = max(dif, mx - mn);
                    }
                }
            }
            ans = max(ans, dif);
        }
        cout << ans << "\n";
    }
}
