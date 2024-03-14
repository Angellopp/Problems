#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << nn
#define dbg(n) cout << "<[" << #n << "] = " << n << ">" << nn
ll MOD = 998244353;
using namespace std;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        ll a, b, ans1 = 0;
        cin >> a >> b;
        ll ba = b / a;
        ll c = 1;
        while (c <= ba) {
            c *= 2, ans1++;
        }
        ll pp = 1LL<<(ans1-1);
        ll pp2 = 1LL<<(ans1-2);
        ll ans = (b / pp - a + 1) % MOD;
        if (pp2 * 3 <= ba) {
            ans += ((b / (pp2 * 3) - a + 1) % MOD * (ans1 - 1)) % MOD;
        }
        cout << ans1 << " " << ans % MOD << nn;

    }
    return 0;
}