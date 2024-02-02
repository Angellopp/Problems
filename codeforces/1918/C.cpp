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
            i--;
        }
        if (ans > 0) {
            ll aux = 0;
            while(i >= 0) {
                ll dif = (1LL<<i & a) - (1LL<<i & b);
                if (dif) {
                    if (dif > 0 and (aux | 1LL<<i) <= r){
                        aux |= 1LL<<i;
                        ans -= dif;
                    }
                    else ans += dif;
                }
                i--;
            }
        }
        else {
            ll can = 1;
            while(i >= 0) {
                ll d = (1LL<<i & a) - (1LL<<i & b);
                if (d) {
                    ans += can * abs(d);
                    can = -1;
                }
                i--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}