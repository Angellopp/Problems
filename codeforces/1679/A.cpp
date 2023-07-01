#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int tt; cin >> tt;
    ll n;
    while (tt--) {
        cin >> n;
        if (n % 2 == 1 or n == 2) { cout << -1 << "\n"; continue ;}
        if (n % 6 == 0) cout << n / 6 << " ";
        else cout << n / 6 + 1 << " ";
        cout << n / 4 << "\n";
        
    }
}