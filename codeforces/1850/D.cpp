#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n == 1) {
            cout << "0\n";
            continue;
        }
        sort(v.begin(), v.end());
        int ma = 0, l = 1;
        for (int i = 1; i < n; i++) {
            if(v[i] - v[i-1] <= k) {
                l++;
                // cout << "l";
            }
            else {
                ma = max(ma, l);
                l = 1;
            }
        }
        ma = max(ma, l);
        cout << n - ma << "\n";
    }
    return 0;
}