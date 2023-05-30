#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, rpta = 0; cin >> n;
    int x[2005], y[2005];
    map<pair<int,int>,int> m;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
        for (int j = 1; j < i; j++)
            rpta += m[make_pair(x[i] + x[j], y[i] + y[j])]++;
    }
    cout << rpta;
}