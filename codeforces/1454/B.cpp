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
    int tt;
    cin >> tt;
    int n;
    vi v(maxn);
    vi f(maxn  + 1);
    while (tt--) {
        cin >> n;
        int ans = maxn + 1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            f[v[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if(f[v[i]] == 1) {
                ans = min (ans, v[i]);
            }
        }
        // cout << ans;
        if (ans != maxn + 1) {
            for (int i = 0; i < n; i++) {
                if (v[i] == ans) {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
        else cout << -1 << "\n";
        for (int i = 0; i < n; i++) {
            f[v[i]] = 0;
        }
    }
    return 0;
}
