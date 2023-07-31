#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, aux, ans;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> aux;
            if(aux == i)
                ans++;
        }
        cout << (ans + 1) / 2 << "\n";
    }
}