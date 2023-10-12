#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
 
using namespace std;
 
 
int main() {
    fast_io;
    int tt, n;
    cin >>tt;
    char aux;
    while (tt--) {
        int a[1000][1000];
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> aux;
                a[i][j] = aux - 'a';
            }
        }
        int ans = 0;
        for (int i = 0; i < n/2; i++) {
            for (int j = 0; j < n/2; j++) {
                // int mi = min(min(min(a[i][j], a[n - 1- i][n - 1- j]), a[j][n- 1- i]), a[n - 1- j][i]);
                int ma = max(max(max(a[i][j], a[n - 1- i][n - 1- j]), a[j][n- 1- i]), a[n - 1- j][i]);
                ans += ma * 4 - (a[i][j] + a[n - 1- i][n - 1- j] + a[j][n- 1- i] + a[n - 1- j][i]);
                // a[i][j] = 9;
                // a[n - 1- i][n - 1- j] = 9;
                // a[j][n- 1- i] = 9;
                // a[n - 1- j][i] = 9;
            }
        }
        
        cout << ans << "\n";
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << a[i][j] << " ";
        //     }cout << endl;
        // }
    }
}