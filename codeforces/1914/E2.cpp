#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2*1e5+5;
int main() {
    int tt; 
    cin >> tt;
    ll a[MAXN], b[MAXN];
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
        // for (int i = 0; i < n; i++) cout << cc[i].first << " "; cout << endl;
        sort(cc.rbegin(), cc.rend());
        // for (int i = 0; i < n; i++) cout << cc[i].first << " "; cout << endl;
        for (int i = 0; i < n; i++) {
            ans += (i % 2) ? b[cc[i].second] : a[cc[i].second];
        }
        
        cout << ans <<"\n";

    }
}