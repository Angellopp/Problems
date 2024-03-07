#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
#define dbug(n) cout << "<[" n.to_string() "] = " << n << ">" << nn
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, L, aux1, aux2;
        cin >> n >> L;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            cin >> aux1 >> aux2;
            if (aux1 <= L) {
                v.emplace_back(aux2, aux1);
            }
        }
        n = v.size();
        sort(v.begin(), v.end());
        int ans = 0;
        for (int l = 0; l < n; l++) {
            int aux = 0;
            multiset<int> m;
            for (int r = l; r < n; r++) {
                m.insert(v[r].S);
                aux += v[r].S;
                int x = v[r].F - v[l].F;
                while (!m.empty() and aux > L - x) {
                    auto it = --m.end();
                    aux -= *it;
                    m.erase(it);
                }
                ans = max(ans, (int)m.size());
            }
        }
        cout << ans << nn;
    }
    return 0;
}