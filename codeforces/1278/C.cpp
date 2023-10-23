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
// using u128 = __uint128_t;
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
int a[maxn]{};
int l[maxn/2+1]{};
int r[maxn/2+1]{};
int dpl[maxn/2+1]{};
int dpr[maxn/2+1]{};

int main(){ 
    fast_io;
    int tt, n, red, blue, dif; 
    cin >> tt;
    while (tt--) {
        red = 0, blue = 0;
        cin >> n;
        for (int i = 0; i < 2*n; i++) {
            cin >> a[i];
            (a[i] == 1) ? red++ : blue++; 
        }
        dif = red - blue;
        for (int i = 0; i < n; i++) {
            dpl[i+1] = (a[n-1-i] == 1) ? (dpl[i] + 1) : (dpl[i] - 1);
            dpr[i+1] = (a[n+i] == 1) ? (dpr[i] + 1) : (dpr[i] - 1);  
        }
        if(dif < 0) {
            for (int i = 0; i < n; i++) {
                dpl[i+1] *= -1;
                dpr[i+1] *= -1;
            }
            dif *= -1;
            
        }

        int ind_a = 0, ind_b = 0;
        for (int i = 0; i < n; i++) {
            if (dpl[i+1] > ind_a) {
                l[++ind_a] = i+1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (dpr[i+1] > ind_b) {
                r[++ind_b] = i+1;
            }
        }
        int ans = 2*n, s;
        for (int i = 0; i <= ind_a; i++) {
            if(dif-i <= ind_b) {
                s = l[i] + r[dif-i];
                ans = min(ans, s);
            }
        }
        cout << ans << "\n";

        // cout << "dif: " << dif << "\n";
        // for (int i = 0; i <= n; i++) {
        //     cout << dpl[n-i] << " ";
        // }cout << "| ";
        // for (int i = 0; i <= n; i++) {
        //     cout << dpr[i] << " ";
        // }
        // cout << "\na: ";
        // for (int i = 0; i <= ind_a; i++) {
        //     cout << l[i] << " ";
        // }
        // cout << "\nb: "; 
        // for (int i = 0; i <= ind_b; i++) {
        //     cout << r[i] << " ";
        // }
        // cout << endl;



    }
    return 0;
}
