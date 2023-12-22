#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int main () {
    int tt, n, aux;
    cin >> tt;
    while(tt--) {
        vector<vector<pair<int,int>>> a(3);
        int ans = 0;
        cin >> n;
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < n; i++) {
                cin >> aux;
                a[j].emplace_back(aux, i);
            }
            sort(a[j].rbegin(), a[j].rend());
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if(a[0][i].second != a[1][j].second and a[1][j].second != a[2][k].second and a[0][i].second != a[2][k].second) {
                        ans = max(ans, a[0][i].first + a[1][j].first + a[2][k].first);
                        
                    }
                }
            }
        }
        cout << ans << "\n";

    }
}