
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
ll INF = 1e18;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, k, d;
        cin >> n >> m >> k >> d;

        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        cin >> a[i][j];
                }
        }

        vector<ll> cost(n + 1);
        for (int i = 1; i <= n; i++) {
                deque<pair<ll, ll>> dq;
                dq.push_back({1, 1});
                for (int j = 2; j <= m; j++) {
                        if (dq.front().F < j - d - 1) dq.pop_front();

                        while (dq.back().S >= dq.front().S + a[i][j] + 1) {
                                dq.pop_back();
                        }

                        dq.push_back({j, dq.front().S + a[i][j] + 1});
                        if (j == m) cost[i] = dq.back().S;
                }
        }

        for (int i = 1; i <= n; i++) cost[i] += cost[i - 1];

        ll ans = INF;
        for (int i = k; i <= n; i++) ans = min(ans, cost[i] - cost[i - k]);

        cout << ans << '\n';
}
    return 0;
}