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

const ll maxn = 1e18;
const u32 MOD = 1000000007;

int sum(ll n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main(){ 
    fast_io;
    ll n;
    cin >> n;
    ll sq, ans = maxn;
    for (int i = 1; i <= 9*18; i++) {
        sq = sqrt(i*i + 4 * n);
        if (sq*sq == i*i + 4 * n) {
            if ((-i + sq) % 2 == 0 and (-i + sq) >= 0 and sum((-i + sq) / 2) == i) ans = min(ans, (-i + sq) / 2);
            if ((-i - sq) % 2 == 0 and (-i - sq) >= 0 and sum((-i - sq) / 2) == i) ans = min(ans, (-i - sq) / 2);
            // if (sum(ans) == i) ans = maxn;
        }
    }
    (ans != maxn) ? cout << ans : cout << -1;
    return 0;
}
