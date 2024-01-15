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
    while (tt--) {
        vector<pair <int, int>> p(4);
        cin >> p[0].F >> p[0].S;
        cin >> p[1].F >> p[1].S;
        cin >> p[2].F >> p[2].S;
        cin >> p[3].F >> p[3].S;
        int a = 0, b = 0;
        if (p[1].F != p[0].F) a = abs(p[1].F - p[0].F);
        if (p[1].S != p[0].S) b = abs(p[1].S - p[0].S);
        int ans = max(a,b);
        cout << ans *ans << "\n";
    }
    return 0;
}
