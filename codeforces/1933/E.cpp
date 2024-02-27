#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define pb push_back
#define pf push_front
#define PI acos(-1)
#define F first
#define S second

using u32 = uint32_t;
using u64 = uint64_t;
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<string> vs;
typedef priority_queue<int> pq_max;
typedef priority_queue<int, vi, greater<int>> pq_min;

const int maxn = 2e5;
const u32 MOD = 1000000007;


int main(){ 
    fast_io;
    int tt, aux;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n), pre(n+1);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++) {
            pre[i] = v[i-1] + (i > 1 ? pre[i - 1] : 0);
        }
        // for (int i = 0; i <= n; i++) {
        //     cout << pre[i] << " \n"[i == n];
        // }
        int q; 
        cin >> q;
        while (q--) {
            int l, u;
            cin >> l >> u;
            int res = pre[l-1];
            int it = upper_bound(pre.begin(), pre.end(), u+res)-pre.begin();
            // cout << "u+res: " << u+res << "\n";
            if (it != 0) it--;
            // cout << "it: " << pre[it] << " ans: " << it << "\n";
            int ans1 = it, ans2 = (it == n) ? ans1 : it + 1;
            ll val1 = u -pre[ans1]+res;
            ll val2 = pre[ans2] - u-res-1;
            if (val1 > val2) swap(ans1, ans2);
            ans1 = max(l, ans1);
            cout << ans1 << " ";
            // cout << "val1: " << val1 << " val2: " << val2 << "\n";

        }
        cout << "\n";

    }
    return 0;
}
