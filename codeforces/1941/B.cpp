
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
        vector <ll> v(n);
        readv(v, n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
        }
        bool can = 1;
        for (int i = 1 ; i < n - 1 ; i++) {
            sum = sum - 4 * v[i-1];
            v[i] -= 2*v[i-1];
            v[i+1] -= v[i-1];
            if(v[i] < 0 or v[i+1] < 0) {
                can = 0;
            }
        }
        if(sum == 0 and can) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}