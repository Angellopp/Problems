#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int tt; cin >> tt;
    ll n;
    while (tt--) {
        cin >> n;
        ll ans = 0;
        while(n) {
            ans+=n;
            n/=2;
        }
        cout << ans << "\n";
    }
}