#include <bits/stdc++.h>
#include <vector>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define ll long long
using namespace std;

int main() {
    fast_io;
    int n, m;
    cin >> n >> m;
    vector <int> v(n+1);
    int aux1, aux2;
    for (int i = 0; i < m; i++) {
        cin >> aux1 >> aux2;
        v[aux1] = 1;
        v[aux2] = 1;
    }

    int ctr = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            ctr = i;
            break;
        }
    }
    cout << n-1 << "\n";
    for (int i = 1; i <= n; i++) {
        if (i != ctr)
            cout << ctr << " " << i << "\n";
    }
    return 0;
}