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

const int maxn = 1e2;
const u32 MOD = 1000000007;
char a[maxn][maxn]{};
char f[maxn]{};
char c[maxn]{};

int main(){ 
    fast_io;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'C') {
                f[i]++;
                c[j]++;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (f[i] * (f[i] - 1)) / 2;
        ans += (c[i] * (c[i] - 1)) / 2;
    }
    cout << ans;
    return 0;
}
