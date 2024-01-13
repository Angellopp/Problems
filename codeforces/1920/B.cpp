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
        ll n , k , x; 
        cin >> n >> k >> x;
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0;i< n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
            ll aux = 0;
            for(int i = n-1; i>=n-1 -x+1; i--) {
                aux -= 2*v[i];
            }
            // cout << "aux" << aux << endl;
            ll ans = aux;
            for (int i = n-2; i >= n-1-k and i - x +1 >= 0; i--) {
                aux = aux - 2*v[i-x+1] + v[i+1];
                ans = max(ans , aux);
            }
            if (n < k + x) {
                for (int i = x-1; n-i<= k and i >= 0; i--) {
                    // cout << v[i] << "\n";
                    aux = aux + v[i];
                    ans = max(ans , aux);
                }
            }
            cout << sum + ans << "\n";
        // }

    }

    
    return 0;
}
