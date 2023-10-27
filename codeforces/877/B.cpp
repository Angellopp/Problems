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
    string s;
    cin >> s;
    int n = s.size();
    vi v;
    if (s[0] == 'b') v.pb(0);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            if (b != 0) {
                v.pb(b);
                b = 0;
                a = 1;
            }
            else a++;
        }
        else {
            if (a != 0) {
                v.pb(a);
                a = 0;
                b = 1;
            }    
            else b++;
        }
    }
    v.pb(max(a, b));
    if (s[n-1] == 'b') v.pb(0);
    int vsize = v.size();
    // for (int i: v) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // int ans = 0;
    // for (int i = 0; i + 2 < vsize; i+=2) {
    //     ans = max(ans, v[i]+v[i+1]+v[i+2]);
    // }
    // cout << ans << "\n";
    // if (s[0] == 'b' and s[n-1] == 'b')

    int ans = 0;
    if(vsize == 1) {
        cout << v[0] << "\n"; return 0;
    }
    for (int i = 1; i < vsize; i+=2) {
        for (int j = i; j < vsize; j+=2) {
            int sum_parcial = 0;
            for (int k = i; k <= j; k+=2) sum_parcial += v[k];
            for (int k = 0; k < i ; k+=2) sum_parcial += v[k];
            for (int k = j + 1; k < vsize ; k+=2) sum_parcial += v[k];
            // cout << "sum parcial :" << sum_parcial << "\n";
            ans = max(ans, sum_parcial);
        }
    } 
    cout << ans << "\n";
    return 0;
}

