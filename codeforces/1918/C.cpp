#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2*1e5+2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll a, b, r, aux = 0;
        cin >> a >> b >> r;
        if (a < b) swap(a, b);
        bool can = 1;
        for (int i = 61; i >= 0; i--) {
            bool ca = (a >> i) & 1;
            bool cb = (b >> i) & 1;
            if (ca ^ cb) {
                if (can) can = 0;
                else if (ca and (aux | (1LL<<i)) <= r) {
                    aux |= 1LL<<i;
                    a ^= 1LL<<i;
                    b ^= 1LL<<i;
                }
            }
        }
        cout << a - b << "\n";
    }
    return 0;
}