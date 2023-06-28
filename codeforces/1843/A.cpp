#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    int n, aux;
    while (tt--) {
        cin >> n;
        vector <int> v;
        for(int i = 0; i < n ; i++) {
            cin >> aux;
            v.push_back(aux);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i < (n)/2; i++) {
            ans -= v[i];
        }
        for(int i = (n+1)/2 ; i < n; i++) {
            ans += v[i];
        }
        cout << ans << "\n";
    }
}