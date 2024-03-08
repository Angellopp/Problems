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
        int n;
        cin >> n;
        int a[31] = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 
                     1, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 4};
        int ans = min(n/ 15 + a[n%15], (n >= 15) ? (n - 15)/ 15  + a[(n - 15 * ((n - 15)/ 15))%30] : n/ 15 + a[n%15]);
        cout << ans << nn;
    }
    return 0;
}