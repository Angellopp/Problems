#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
#define dbg(n) cout << "<[" << #n << "] = " << n << ">" << nn
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, c, par = 0, impar = 0;
        cin >> n >> c;
        ll ans = 1LL * (c + 1) * (c + 2) / 2;
        ll res = 1LL * (c + 1) * n;
        int aux;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            res += ((aux + 1) & 1) - aux / 2;
            (aux % 2 ? impar : par)++;
        }
        res -= 1LL * (par + 1) * (par) / 2 + 1LL * (impar + 1) * (impar) / 2;
        cout << ans - res << nn;

    }
    return 0;
}