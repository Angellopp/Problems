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
        int n;
        cin >> n;
        vector <char> a(n), b(n);
        int x= 0, y = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == '1' and b[i] == '0') y++;
            if (a[i] == '0' and b[i] == '1') x++;
        }
        // cout << x << y << "\n";
        int iq = min(x, y);
        x -= iq; y-= iq;
        int ans = max(x, y) + iq;
        cout << ans << "\n";

    }
    return 0;
}
