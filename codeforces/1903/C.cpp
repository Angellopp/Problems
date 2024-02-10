#include <bits/stdc++.h>
#define fori for (int i = 0; i < n; i++)
#define imp(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << "\n";
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
using namespace std;
int main() {
    fast_io
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n+1);
        fori cin >> v[i];
        ll aux = 0, sum = 0;
        for (int i = n-1; i >= 0; i--) {
            if (aux > 0) 
                sum += aux;
            aux += v[i];
        }
        sum += aux;
        cout << sum << "\n";

    }
}