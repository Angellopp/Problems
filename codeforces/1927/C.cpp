#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--){
        int n, m, k, aux;
        cin >> n >> m >> k;
        vector <bool> c(k+1), d(k+1), comp(k+1);
        for (int i = 0; i < n; i++){
            cin >> aux;
            if (aux <= k){
                c[aux] = 1;
                comp[aux] = 1;
            }
        }
        for (int i = 0; i < m; i++){
            cin >> aux;
            if (aux <= k){
                d[aux] = 1;
                comp[aux] = 1;
            }
        }
        int sumc = 0, sumd = 0;
        for (int i = 1; i <= k; i++) sumc += c[i];
        for (int i = 1; i <= k; i++) sumd += d[i];
        bool can = 1;
        for (int i = 1; i <= k; i++) {
            if (comp[i] == 0){
                can = 0;
                break;
            }
        }
        cout << ((can and sumc >= k/2 and sumd >= k/2) ? "YES\n" : "NO\n");   
    }
    return 0;
}