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
        vector <int> v(n);
        readv(v, n);
        sort(v.begin(), v.end());
        int x1 = v[n-1] - v[0] + v[n-1] - v[1] + v[n-2] - v[0] + v[n-2] - v[1];
        cout << x1 << nn;

    }
    return 0;
}