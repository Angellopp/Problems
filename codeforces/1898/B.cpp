#include <iostream>
using ll = long long;
using namespace std;

int main() {
    int tt, n, a[200002];
    cin >> tt;
    while (tt--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        ll res = a[n-1], par;
        for (int i = n-2; i >= 0; i--) {
            par = (a[i] + res - 1) / res;
            res = a[i] / par;
            ans += par - 1;
        }
        cout << ans << "\n";
    }
}