#include <iostream>
using namespace std;
const int MAXN = 2e5 + 5;
int main() {
    int tt, aux;
    cin >> tt;
    int a[MAXN], b[MAXN];
    int c[MAXN];
    while (tt--) {
        int n, k;
        cin >> n >> k;
        int ans = 0, maxlocal = 0, anslocal;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) a[i]+= a[i- 1];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < min(n, k); i++) {
            maxlocal = max(maxlocal, b[i]);
            anslocal = maxlocal * (k-i-1) + a[i];
            ans = max(ans, anslocal);
        }
        cout << ans << "\n";
    }
}