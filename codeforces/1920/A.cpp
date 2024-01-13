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
        int n, aux1,aux2; cin >> n;
        int inf = 0, sup = 1e9+1;
        map <int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> aux1 >> aux2;
            if (aux1 == 1) {
                inf = max(inf, aux2);
            }
            else if (aux1 == 2){
                sup = min(sup, aux2);
            }
            else {
                mp[aux2]++;
            }
        }
        int ans = 0;
        ans = (sup - inf < 0) ? 0 : sup - inf +1;
        for (auto x : mp) {
            if (x.F >= inf and x.F <= sup) {
                ans --;
            }
        }
        ans = (sup - inf < 0) ? 0 : ans;
        cout << ans << "\n";    

    }
    return 0;
}
