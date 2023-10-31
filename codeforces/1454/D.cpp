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

const int maxn = 1e5;
const u32 MOD = 1000000007;


int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        ll n, m;
        cin >> n;
        m = n;
        int sq = sqrt(n);
        int ans = 0;
        vll fac;
        for (int i = 2; i <= sq; i++) {
            int a = 0;
            while(n % i == 0) {
                n /= i;
                a++;
            }
            if(a>=1) {
                ans = max(a, ans);
                fac.pb({i, a});
            }
        }
        if(ans <= 1) {
            cout << "1\n" << m << "\n";
        }
        else {
            fac.pb({n, 1});
            vector<ll> rp(ans);
            for (int i = 0; i < ans ; i++) {
                rp[i] = 1;
            }
            for(pll p : fac) {
                for(int i = 0; i < p.S; i++) {
                    rp[i]*=p.F;
                }
            }
            cout << ans << "\n";
            for (int i = 0; i < ans ; i++) {
                cout << rp[ans-i-1] << " "; 
            }
            cout << "\n";
        }
    }
    return 0;
}
