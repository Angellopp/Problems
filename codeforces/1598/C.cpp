#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2*1e5;

int main() {
    int tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll k = 0;
        for (int i = 0; i < n; i++) {
            k += v[i];
        }
        if (2*k % n) {
            cout << "0\n";
            continue;
        }
        k *= 2;
        k /= n; 
        sort(v.begin(), v.end());
        // int i = 0, j = n-1;
        // while(i < j) {
        //     if(v[i] + v[j] < 2 * k) {

        //     }
        // }
        ll ans = 0;
        int val = 0;
        for (int i = 0; i < n-1; i++) {
            val = k - v[i];
            int aux = lower_bound(v.begin() + i + 1, v.end(), val) - v.begin() ;
            int aux2 = upper_bound(v.begin() + i + 1, v.end(), val) - (v.begin() + 1);
            // cout << aux << " " << aux2 << " " << val << "\n";
            if (aux2 >=0 and aux2 < n and aux >=0 and aux < n) {

                if (v[aux] == val and v[aux2] == val) {
                    ans += (aux2 - aux + 1);
                }
            }
        }
        v.clear();
        cout << ans << "\n";
    }
    
}