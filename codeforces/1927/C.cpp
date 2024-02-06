#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--){
        int n, m, k;
        cin >> n >> m >> k;
        vector <int> a(n), b(m);
        vector <int> c(k+1), d(k+1), comp(k+1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= k){
                c[a[i]] = 1;
                comp[a[i]] = 1;
            }
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
            if (b[i] <= k){
                d[b[i]] = 1;
                comp[b[i]] = 1;
            }
        }
        int sumc = 0, sumd = 0;
        for (int i = 1; i <= k; i++) {
            sumc += c[i];
        }
        for (int i = 1; i <= k; i++) {
            sumd += d[i];
        }
        bool can = 1;
        for (int i = 1; i <= k; i++) {
            if (comp[i] == 0){
                cout << "NO\n";
                can = 0;
                break;
            }
        }
        if (can){
        if (sumc >= k/2 and sumd >= k/2){
            cout << "YES\n";
        }
        else cout << "NO\n";
            
        } 
        // cout << 1;

        
    }
    return 0;
}