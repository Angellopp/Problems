#include <bits/stdc++.h>
#define long long ll;

using namespace std;

int main() {
    int tt; cin >> tt;
    int n, aux, ans;
    while (tt--) {
        ans = 0;
        cin >> n;
        int acu = -1;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            acu = acu & aux;
            if (acu == 0) {
                ans++;
                acu = -1;
            }

        }
        cout << ((ans == 0) ? 1 : ans); cout << "\n";
        // cout << ans << "\n";
        
    }
}