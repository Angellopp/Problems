
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
#define dbg(n) cout << "<[" << #n << "] = " << n << ">" << nn
using namespace std;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int k, n, m;
        cin >> n >> m >> k;
        vector <int> v1(n), v2(m);
        readv(v1, n);
        readv(v2, m);
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = 0;
            for (j = 0 ;j < m; j++) {
                if(v1[i] + v2[j] > k) {
                    // dbg(j);
                    break;
                }
            }
            if(j != 0 and v1[i] + v2[j-1] <= k) {
                ans += j;
            }
        }
        cout << ans << nn;

    }
    return 0;
}