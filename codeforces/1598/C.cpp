#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2*1e5;

int main() {
    int tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll k = 0;
        map <int, int> m;
        for (int i = 0; i < n; i++) {
            m[v[i]]++;
            k += 2*v[i];
        }
        if (k % n) {
            cout << "0\n";
            continue;
        }
        k /= n; 
        ll ans = 0;
        int val = 0;
        for (auto a: m) {
            val = k - a.first;
            if (val == a.first) ans += 1LL * m[a.first] * (m[a.first] - 1);
            else if (m[val]) ans += 1LL * m[a.first] * m[val];
        }
        v.clear();
        cout << ans /2<< "\n";
    }
    
}