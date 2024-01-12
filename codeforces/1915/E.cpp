#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n,aux;
        cin >> n;
        vector <ll> dp(n+2);
        set<ll> s;
        bool ans = false;
        for (int i = 1; i <= n; i++) {
            cin >> aux;
            dp[i] = dp[i-1] + ((i % 2) ? aux : -aux);
            if(dp[i] == 0) ans = true;
            s.insert(dp[i]);
        }
        ans = ans or (s.size() != n);
        cout << ((ans)? "YES" : "NO") << "\n";
    }
}