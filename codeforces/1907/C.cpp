#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int freq[27]{};
        int n, mx = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            freq[s[i]-'a']++;
            mx = max(mx, freq[s[i]-'a']);
        }
        // cout << "mx:" << mx << "\n";
        cout << ((mx <= n/2) ? 0 + (n & 1) : 2*mx - n) << "\n";


    }
}
