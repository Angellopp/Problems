#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 6;
int main() {
    int tt; 
    cin >> tt;
    ll a[MAXN], b[MAXN];
    // vector <pair<ll,int>> cc(MAXN);
    while (tt--) {
        vector <pair<ll,int>> cc;
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 0; i < n; i++) cin >> a[i]; 
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) {
            a[i] = (a[i] - 1);
            b[i] = (1 - b[i]);
        }
        for (int i = 0; i < n; i++) {
            cc.push_back({(a[i] - b[i]), i});
        }
        sort(cc.rbegin(), cc.rend());
        for (int i = 0; i < n; i++) {
            ans += (i % 2) ? b[cc[i].second] : a[cc[i].second];
        }
        cout << ans <<"\n";

    }
}