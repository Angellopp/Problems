#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2*1e5+2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll a, b, r;
        cin >> a >> b >> r;
        if (a < b) swap(a, b);
        ll ans = 0;
        ll i = 61;
        while ((r>>i & 1LL) == 0 and i >= 0) {
            ans += (a & (1LL<<i));
            ans -= (b & (1LL<<i));
            a -= a & (1LL<<i);
            b -= b & (1LL<<i);
            i--;
        }
        ll d = 0;
        if (ans > 0) {
            bool can = 0;
            while(i >= 0) {
                ll d1 = (1LL<<i & a) - (1LL<<i & b);
                ll d2 = -d1;
                if (can) d += min(d1, d2);
                else {
                    if ((r>>i & 1LL) == 1) {
                        if (d2 >= d1) can = 1;
                        d += min(d1, d2);
                    }
                    else d += d1;
                }
                i--;
            }
        }
        else {
            if (a < b) swap(a, b);
            ll can = 1;
            while(i >= 0) {
                ll d1 = (1LL<<i & a);
                ll d2 = (1LL<<i & b);
                if (d1 ^ d2) {
                    ans += can * abs(d1 - d2);
                    can = -1;
                }
                i--;
            }
        }
        cout << ans + d << "\n";
    }
    return 0;
}