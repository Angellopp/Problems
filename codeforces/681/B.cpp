#include <bits/stdc++.h>
typedef long long ll; 
using namespace std;
int N = 2e5;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    bool y = true;
    for (ll i = 0; i * 1234567 <= n and y; i++) {
        for (ll j = 0; i * 1234567 + j * 123456 <= n and y; j++) {
            if((n - i * 1234567 - j * 123456) % 1234 == 0) {
                y = false;
            }
        }
    }
    if(!y) cout << "YES";
    else cout << "NO";
    
}