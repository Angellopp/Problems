#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int tt; cin >> tt;
    ll n;
    while (tt--) {
        cin >> n;
        int a[n];
        ll s1 = 0, s2 = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            s2 += a[i];
        }
        ll ans = 1;
        for (int i = 0; i < n - 1; i++){
            s1 += a[i]; s2 -= a[i];
            ans = max(ans, gcd(s1, s2));
        }
        cout << ans << "\n";
    }
}