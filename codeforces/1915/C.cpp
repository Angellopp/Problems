#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, aux;
        cin >> n;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            ans += aux;
        }
        ll a = sqrt(ans);
        if(a * a == ans) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}