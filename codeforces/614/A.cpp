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


int main(){ 
    fast_io;
    ll l, r, k;
    cin >> l >> r >> k;
    bool b = true;
    ll tope = r / k, i = 1;
    for (i = 1; i <= tope; i*=k) {
        if (i >= l) {cout << i << " "; b = false;}
    }
    if(i >= l) {cout << i << "\n"; b = false;}

    if (b) cout << -1 << "\n";
    return 0;
}
