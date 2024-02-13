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
        int n, k;
        cin >> n >> k;
        set <int> s;
        int a = n - k, b = n + k - 2;
        if (a % 2 == 0) {
            a /= 2;
            for (int i = 1; i * i <= a; i++) {
                if (a % i == 0) {
                    if (i + 1 >= k) s.insert(i);
                    if (i * i != a and a / i+1 >= k) s.insert(a / i);
                }
            }
        }
        if (b % 2 == 0 and b) {
            b /= 2;
            for (int i = 1; i * i <= b; i++) {
                if (b % i == 0) {
                    if (i + 1>= k) s.insert(i);
                    if (i * i != b and b / i+1 >= k) s.insert(b / i);
                }
            }
        }
        cout << s.size() << '\n';

    }
    return 0;
}
