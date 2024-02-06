#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n, q;
    cin >> n;
    vector<int> a(n), p(n, -1);
    cin >> a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        p[i] = (a[i - 1] != a[i]) ? i - 1 : p[i - 1];
    }
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l -= 1, r -= 1;
        if(p[r] >= l) cout << p[r] + 1 << " " << r + 1 << '\n';
        else cout << "-1 -1\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
