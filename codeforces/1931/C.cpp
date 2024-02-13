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
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n);
        int sum = 0;
        rep(0, n) {
            cin >> v[i];
        }
        int rep1 = v[0], rep2 = v[n-1], r1 = 0, r2 = 0;
        for (int i = 0; i < n; i++) {
            if(v[i] == rep1) {
                r1++;
            }
            else break;
        }
        for (int i = n-1; i >= 0; i--) {
            if(v[i] == rep2) {
                r2++;
            }
            else break;
        }
        if(rep1 == rep2) cout <<max(n - (r1 + r2), 0) << "\n"; 
        else cout << max(n - max(r1,r2), 0) << "\n"; 
        // r1 = max(r1, r2);



        
    }
    return 0;
}
