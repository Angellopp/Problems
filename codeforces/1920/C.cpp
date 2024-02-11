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

vector <int> prim;
int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    // primos();
    while (tt--) {
        int n, ans = 0; 
        cin >> n;
        vector<int> v(n+1);
        rep(1, n+1) cin >> v[i];
        rep(1, n+1) {
            if (n % i == 0) {
                int ggg = 0;
                for (int j = 1; j <= i; j++) {
                    int gg = 0;
                    for (int k = j+i; k <= n; k+=i) {
                        gg = __gcd(abs(v[k] - v[k-i]), gg);
                    }
                    ggg = __gcd(ggg, gg);
                }
                if (ggg != 1) 
                // cout << i << ' ' << ggg << '\n';
                ans ++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
