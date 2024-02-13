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
        int n, aux;
        cin >> n;
        set <int> s;
        for (int i = 0; i < n; i++) {
            cin >> aux; s.insert(aux);
        }
        vector <int> v;
        int ans = 1;
        for (auto x : s) v.push_back(x);
        for (int i = 0; i < v.size(); i++) {
            int a = upper_bound(v.begin(), v.end(), v[i] + n-1) - v.begin();
            if(a) a--;
            a-= i;
            ans = max(a+1,ans);
        }
        cout << ans << "\n";
    }
    return 0;
}
