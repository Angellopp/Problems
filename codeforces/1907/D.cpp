#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
using namespace std;
int main() {
    int tt, n; 
    cin >> tt;
    while (tt--) {
        cin >> n;
        vector <ll> L(n), R(n); 
        for (int i = 0; i < n; i++) {
            cin >> L[i] >> R[i];
        }
        ll lo = 0, hi = 1e9;
        while (lo < hi) {
            bool ans = true;
            ll mid = (lo + hi)/2;
            pair <ll,ll> act = {0, 0};
            for(int i = 0; i < n; i++) {
                act = {max(act.f - mid, L[i]), min(act.s + mid, R[i])};
                if (act.f > act.s) {
                    ans = false;
                    break;
                }
            }
            if (!ans) {
                lo = mid+1;
            } else 
            hi = mid;
        }
        cout << lo << "\n";
    }
}