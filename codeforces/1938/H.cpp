#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define dbg(x) cout << "=> ["#x << " = " << x << "]" << endl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((int) x.size())
#define F first
#define S second
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    ll ans = 0;
    bool b1 = 0;
    bool b2 = 0;
    int delta = 1e9 + 5;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int one = 0;
        for (char c : s) one += (c == '1');
        int zero = sz(s) - one;
        //dbg(one); dbg(zero);
        delta = min(delta, abs(one - zero));
        
        if (one < zero) {
            ans += one;
            b1 = true;
        }
        else {
            ans += zero;
            b2 = true;
        }
    }
    //dbg(delta);
    if (b1 and b2) cout << ans << "\n";
    else {
        if (ans == 0) cout << 0 << "\n";
        else cout << ans + delta << "\n";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}
