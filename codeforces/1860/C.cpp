#include <bits/stdc++.h>
#define rep(ini, n) for (int i = ini; i < n; i++)
#define imp(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << "\n";
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
using namespace std;

const int MAXN = 3 * 1e5 + 5;
int main() {
    fast_io
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n);
        cin >> v[0];
        int mnb = v[0], mna = MAXN;
        int ans = 0;
        rep(1, n) {
            cin >> v[i];
            if (v[i] > mnb and (mna > v[i] or mna == MAXN)) {
                ans++;   
                mna = min(v[i], mna);
            }
            else {
                mnb = min(mnb, v[i]);
            }
        }
        cout << ans << "\n";

    }
}