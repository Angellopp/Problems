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
typedef double dd;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<string> vs;
typedef priority_queue<int> pq_max;
typedef priority_queue<int, vi, greater<int>> pq_min;

const int maxn = 1e6;
const u32 MOD = 1000000007;


int main(){ 
    fast_io;
    int t1, t2, x1, x2, t0, y1, y2;
    cin >> t1 >> t2 >> x1 >> x2 >> t0;
    pii difmin = {maxn + 1, 1};
    int tt1 = (t1 - t0);
    int tt2 = (t2 - t0);
    ll i, j, jmin = x2, imin = 0;
    if (tt2 == 0 or tt1 == 0) {
        if(tt1 == 0) {imin = x1; jmin = 0;}
        if(tt2 == 0) {imin = 0; jmin = x2;}
        if(tt1 == 0 and tt2 == 0) {imin = x1; jmin = x2;}
        cout << imin << " " << jmin << "\n";
        return 0;
    }
    for (i = x1; i >= 0; i--) {
        j = (((-tt1*i) + tt2 -1)/tt2);
        // j = ceil((dd)(-tt1*i)/tt2);
        if(j <= x2 and (tt1*i + tt2*j) * difmin.S < (i + j) * difmin.F) {
            difmin = {tt1*i + tt2*j,i+j};
            jmin = j; imin = i;
        }
    }
    cout << imin << " " << jmin << "\n";
    return 0;
}
