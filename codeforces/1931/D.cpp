#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define rep(ini, n) for (int i = ini; i < n; i++)
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

// typedef long  ll;
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
// #define int long long int
int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map <ll, vector <ll>> m;
        for (int i = 0; i < n; i++) {
            m[v[i] % y].pb(v[i] % x);
        }
        ll ans = 0;
        for (auto xx : m) {
            // cout << xx.F << "\n";
            map <ll, ll> mm;
            for (auto yy : xx.S) {
                mm[yy]++;
            }
            // for (auto yy : mm) {
            //     cout << yy.F << " " << yy.S << "\n";
            // }
            ll aux = 0;
            for (auto yy : mm) {
                if(2*yy.F == x or 2*yy.F == 0) {
                    ans += yy.S * (yy.S - 1) / 2;
                }
                else aux += yy.S * (mm[x - yy.F]);
                // cout << "ans" <<ans << "\n";
            }
            ans += aux / 2;
        }
        cout << ans << "\n";
        


        
    }
    return 0;
}
