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

bool is(ll n, ll s) {
    ll m = n, sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    if (m - sum >= s) return 1;
    return 0;
}

int main(){ 
    fast_io;
    ll n, s;
    cin >> n >> s;
    ll l = 0, r = n, ans = 0;
    while (l <= r) {
        ll m = l + (r-l)/2;
        if (is(m, s)) {
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    (ans) ? cout << n - ans + 1 : cout << 0;
    return 0;
}
