#include <iostream>
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int tt, n, a[200002];
    cin >> tt;
    ll ans;
    int res = 0, par = 0;
    while (tt--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        ans = 0;
        res = a[n-1], par = 0;
        for (int i = n-2; i >= 0; i--) {
            if (a[i] <= res) {
                res = a[i];
                continue;
            }
            par = (a[i] + res - 1) / res;
            res = a[i] / par;
            ans += par - 1;
        }
        cout << ans << "\n";
    }
}